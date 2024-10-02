VERSION 0.8
FROM debian:bookworm
WORKDIR /workspace

all:
  COPY ./qemu-amd64+all/* ./dist/
  COPY ./qemu-arm64+all/* ./dist/
  COPY ./qemu-riscv64+all/* ./dist/
  RUN cd dist && find . -type f | sort | xargs sha256sum >> ../sha256sums.txt
  SAVE ARTIFACT ./dist/* AS LOCAL dist/ 
  SAVE ARTIFACT ./sha256sums.txt AS LOCAL dist/sha256sums.txt 