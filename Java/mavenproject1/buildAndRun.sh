#!/bin/sh
mvn clean package && docker build -t com.mycomp/mavenproject1 .
docker rm -f mavenproject1 || true && docker run -d -p 9080:9080 -p 9443:9443 --name mavenproject1 com.mycomp/mavenproject1