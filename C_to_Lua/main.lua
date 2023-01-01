local bind = require("bind")
-- entrada
print(bind.double_int(10))  -- imprime 20
print(bind.triple_float(2.5))  -- imprime 7.5
print(bind.reverse_string("Olá, mundo!"))  -- imprime "!odnum ,lO"
print(bind.negate_bool(true))  -- imprime false
print(bind.get_table_size({1, 2, 3, 4}))  -- imprime 4
--  saida
print(bind.get_int())  -- imprime 42
print(bind.get_float())  -- imprime 3.14
print(bind.get_string())  -- imprime "Olá, mundo!"
print(bind.get_bool())  -- imprime true
print(bind.get_nil())  -- imprime nil
print(bind.get_table().chave)  -- imprime "valor"