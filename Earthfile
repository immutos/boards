VERSION 0.8
FROM debian:bookworm
WORKDIR /workspace

all:
  COPY ./boards/milkv-duo+all/* ./dist/
  COPY ./boards/qemu/+all/* ./dist/
  RUN cd dist && find . -type f | sort | xargs sha256sum >> ../SHA256SUMS
  SAVE ARTIFACT ./dist/* AS LOCAL dist/ 
  SAVE ARTIFACT ./SHA256SUMS AS LOCAL dist/SHA256SUMS