VERSION 0.8
FROM debian:bookworm
WORKDIR /workspace

all:
  COPY ./milkv-duo+all/* ./dist/
  COPY ./qemu-amd64+all/* ./dist/
  COPY ./qemu-arm64+all/* ./dist/
  COPY ./qemu-riscv64+all/* ./dist/
  COPY +linux-bookworm-meta/* ./dist/
  COPY +linux-trixie-meta/* ./dist/
  RUN cd dist && find . -type f | sort | xargs sha256sum >> ../sha256sums.txt
  SAVE ARTIFACT ./dist/* AS LOCAL dist/ 
  SAVE ARTIFACT ./sha256sums.txt AS LOCAL dist/sha256sums.txt

linux-bookworm-meta:
  FROM ./util+bookworm-base
  WORKDIR /workspace
  DO ./util+META_PACKAGE --name=linux-image-immutos-qemu --version=${KERNELVERSION}-1 --depends="linux-image-${KERNELVERSION}-immutos-qemu" --arch=all
  SAVE ARTIFACT *.deb AS LOCAL ./dist/

linux-trixie-meta:
  FROM ./util+trixie-base
  WORKDIR /workspace
  DO ./util+META_PACKAGE --name=linux-image-immutos-qemu --version=${KERNELVERSION}-1 --depends="linux-image-${KERNELVERSION}-immutos-qemu" --arch=all
  SAVE ARTIFACT *.deb AS LOCAL ./dist/