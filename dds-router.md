v1.2.0



DDS_ROUTER_CONFIGURATION.yaml
```
version: v3.0

participants:
  - name: SimpleParticipant1
    kind: local
    domain: 0

  - name: SimpleParticipant2
    kind: local
    domain: 1

  - name: CloudWAN
    kind: wan
    connection-addresses:
      - ip: 123.123.123.123
        port: 30002
        transport: tcp
```
