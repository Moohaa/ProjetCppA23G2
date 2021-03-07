--------------------------------------------------------
--  Fichier cr�� - dimanche-mars-07-2021   
--------------------------------------------------------
--------------------------------------------------------
--  DDL for Table COMMANDE
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."COMMANDE" 
   (	"ID_COMMANDE" NUMBER, 
	"QUANTITE" NUMBER, 
	"LIBELLE" VARCHAR2(20 BYTE), 
	"DESCRIPTION" VARCHAR2(20 BYTE), 
	"CALCUL_TOTAL_PRIX" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table COMMANDE_FOURNISSEUR
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."COMMANDE_FOURNISSEUR" 
   (	"ID_COMMANDE" NUMBER, 
	"ID_FOURNISSEUR" NUMBER, 
	"ID_PRODUIT" NUMBER, 
	"QUANTITE" NUMBER, 
	"DATE_ENVOI" DATE, 
	"DATE_RECEPTION" DATE
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table DROITS_ACCES
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."DROITS_ACCES" 
   (	"CODE_DROIT" NUMBER, 
	"LIBELLE_DROIT" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table EVALUATION
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."EVALUATION" 
   (	"ID_NOTE" NUMBER, 
	"NOM_CLIENT" VARCHAR2(20 BYTE), 
	"NOTE_CLIENT" NUMBER, 
	"REMARQUE_CLIENT" VARCHAR2(20 BYTE), 
	"ID_FACTURE" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table FOURNISSEUR
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."FOURNISSEUR" 
   (	"ID_FOURNISSEUR" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"TELEPHONE" NUMBER, 
	"ADRESSE" VARCHAR2(20 BYTE), 
	"MAIL" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table MENU
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."MENU" 
   (	"ID_MENU" NUMBER, 
	"DATE_MENU" DATE, 
	"NOM_MENU" VARCHAR2(20 BYTE), 
	"CATEGORIE_MENU" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table OFFRE
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."OFFRE" 
   (	"ID_PRODUIT" NUMBER, 
	"ID_FOURNISSEUR" NUMBER, 
	"PRIX" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table PLAT
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."PLAT" 
   (	"NOM_PLAT" VARCHAR2(20 BYTE), 
	"INGEDIENTS_PLAT" VARCHAR2(20 BYTE), 
	"SPECIALITE_PLAT" VARCHAR2(20 BYTE), 
	"PRIX_PLAT" NUMBER, 
	"ID_MENU" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table PRODUIT
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."PRODUIT" 
   (	"ID_PRODUIT" NUMBER, 
	"NOM_PRODUIT" VARCHAR2(20 BYTE), 
	"CATEGORIE_PRODUIT" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table STOCKAGE
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."STOCKAGE" 
   (	"ID_STOCK" NUMBER, 
	"CATEGORIE_STOCK" VARCHAR2(20 BYTE), 
	"TEMPERATURE" NUMBER, 
	"EMPLACEMENT" VARCHAR2(20 BYTE), 
	"DATE_STOCK" DATE, 
	"QUANTITE" NUMBER, 
	"ID_PRODUIT" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table TABLES
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."TABLES" 
   (	"NUM_TABLE" NUMBER, 
	"NB_CHAISES" NUMBER, 
	"EMPLACEMENT" VARCHAR2(20 BYTE), 
	"DISPONIBILITE" VARCHAR2(20 BYTE), 
	"DEBARRASSAGE" VARCHAR2(20 BYTE), 
	"ID_COMMANDE" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table TRANSACTION
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."TRANSACTION" 
   (	"ID_FACTURE" NUMBER, 
	"NOM_CLIENT" VARCHAR2(20 BYTE), 
	"NUM_CLIENT" NUMBER, 
	"ADRESSE_CLIENT" VARCHAR2(20 BYTE), 
	"DATE_HEURE" DATE, 
	"PRIX" NUMBER, 
	"ID_UTILISATEUR" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table UTILISATEURS
--------------------------------------------------------

  CREATE TABLE "PROJET2A"."UTILISATEURS" 
   (	"ID_UTILISATEUR" NUMBER, 
	"NOM_UTILISATEUR" VARCHAR2(20 BYTE), 
	"PRENOM_UTILISATEUR" VARCHAR2(20 BYTE), 
	"EMAIL_UTILISATEUR" VARCHAR2(20 BYTE), 
	"MDP_UTILISATEUR" VARCHAR2(20 BYTE), 
	"ROLE_UTILISATEUR" VARCHAR2(20 BYTE), 
	"CODE_DROIT" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
REM INSERTING into PROJET2A.COMMANDE
SET DEFINE OFF;
REM INSERTING into PROJET2A.COMMANDE_FOURNISSEUR
SET DEFINE OFF;
REM INSERTING into PROJET2A.DROITS_ACCES
SET DEFINE OFF;
REM INSERTING into PROJET2A.EVALUATION
SET DEFINE OFF;
REM INSERTING into PROJET2A.FOURNISSEUR
SET DEFINE OFF;
REM INSERTING into PROJET2A.MENU
SET DEFINE OFF;
REM INSERTING into PROJET2A.OFFRE
SET DEFINE OFF;
REM INSERTING into PROJET2A.PLAT
SET DEFINE OFF;
REM INSERTING into PROJET2A.PRODUIT
SET DEFINE OFF;
REM INSERTING into PROJET2A.STOCKAGE
SET DEFINE OFF;
REM INSERTING into PROJET2A.TABLES
SET DEFINE OFF;
REM INSERTING into PROJET2A.TRANSACTION
SET DEFINE OFF;
REM INSERTING into PROJET2A.UTILISATEURS
SET DEFINE OFF;
--------------------------------------------------------
--  DDL for Index COMMANDE_FOURNISSEUR_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."COMMANDE_FOURNISSEUR_PK" ON "PROJET2A"."COMMANDE_FOURNISSEUR" ("ID_COMMANDE") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index UTILISATEURS_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."UTILISATEURS_PK" ON "PROJET2A"."UTILISATEURS" ("ID_UTILISATEUR") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index STOCKAGE_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."STOCKAGE_PK" ON "PROJET2A"."STOCKAGE" ("ID_STOCK") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index FOURNISSEUR_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."FOURNISSEUR_PK" ON "PROJET2A"."FOURNISSEUR" ("ID_FOURNISSEUR") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index COMMANDE_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."COMMANDE_PK" ON "PROJET2A"."COMMANDE" ("ID_COMMANDE") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index EVALUATION_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."EVALUATION_PK" ON "PROJET2A"."EVALUATION" ("ID_NOTE") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index PRODUIT_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."PRODUIT_PK" ON "PROJET2A"."PRODUIT" ("ID_PRODUIT") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index TABLES_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."TABLES_PK" ON "PROJET2A"."TABLES" ("NUM_TABLE") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index PLAT_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."PLAT_PK" ON "PROJET2A"."PLAT" ("NOM_PLAT") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index TRANSACTION_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."TRANSACTION_PK" ON "PROJET2A"."TRANSACTION" ("ID_FACTURE") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index MENU_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."MENU_PK" ON "PROJET2A"."MENU" ("ID_MENU") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index DROITS_ACCES_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."DROITS_ACCES_PK" ON "PROJET2A"."DROITS_ACCES" ("CODE_DROIT") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index OFFRE_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "PROJET2A"."OFFRE_PK" ON "PROJET2A"."OFFRE" ("ID_PRODUIT", "ID_FOURNISSEUR") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  Constraints for Table PLAT
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."PLAT" MODIFY ("NOM_PLAT" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."PLAT" ADD CONSTRAINT "PLAT_PK" PRIMARY KEY ("NOM_PLAT")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table MENU
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."MENU" MODIFY ("ID_MENU" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."MENU" ADD CONSTRAINT "MENU_PK" PRIMARY KEY ("ID_MENU")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table PRODUIT
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."PRODUIT" MODIFY ("ID_PRODUIT" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."PRODUIT" ADD CONSTRAINT "PRODUIT_PK" PRIMARY KEY ("ID_PRODUIT")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table FOURNISSEUR
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."FOURNISSEUR" MODIFY ("ID_FOURNISSEUR" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."FOURNISSEUR" ADD CONSTRAINT "FOURNISSEUR_PK" PRIMARY KEY ("ID_FOURNISSEUR")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table TABLES
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."TABLES" MODIFY ("NUM_TABLE" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."TABLES" ADD CONSTRAINT "TABLES_PK" PRIMARY KEY ("NUM_TABLE")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table DROITS_ACCES
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."DROITS_ACCES" MODIFY ("CODE_DROIT" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."DROITS_ACCES" MODIFY ("LIBELLE_DROIT" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."DROITS_ACCES" ADD CONSTRAINT "DROITS_ACCES_PK" PRIMARY KEY ("CODE_DROIT")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table STOCKAGE
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."STOCKAGE" MODIFY ("ID_STOCK" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."STOCKAGE" ADD CONSTRAINT "STOCKAGE_PK" PRIMARY KEY ("ID_STOCK")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table COMMANDE
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."COMMANDE" MODIFY ("ID_COMMANDE" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."COMMANDE" ADD CONSTRAINT "COMMANDE_PK" PRIMARY KEY ("ID_COMMANDE")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table OFFRE
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."OFFRE" MODIFY ("ID_PRODUIT" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."OFFRE" MODIFY ("ID_FOURNISSEUR" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."OFFRE" ADD CONSTRAINT "OFFRE_PK" PRIMARY KEY ("ID_PRODUIT", "ID_FOURNISSEUR")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table EVALUATION
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."EVALUATION" MODIFY ("ID_NOTE" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."EVALUATION" ADD CONSTRAINT "EVALUATION_PK" PRIMARY KEY ("ID_NOTE")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table COMMANDE_FOURNISSEUR
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."COMMANDE_FOURNISSEUR" MODIFY ("ID_COMMANDE" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."COMMANDE_FOURNISSEUR" ADD CONSTRAINT "COMMANDE_FOURNISSEUR_PK" PRIMARY KEY ("ID_COMMANDE")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table TRANSACTION
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."TRANSACTION" MODIFY ("ID_FACTURE" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."TRANSACTION" ADD CONSTRAINT "TRANSACTION_PK" PRIMARY KEY ("ID_FACTURE")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table UTILISATEURS
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."UTILISATEURS" MODIFY ("ID_UTILISATEUR" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."UTILISATEURS" MODIFY ("NOM_UTILISATEUR" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."UTILISATEURS" MODIFY ("PRENOM_UTILISATEUR" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."UTILISATEURS" MODIFY ("EMAIL_UTILISATEUR" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."UTILISATEURS" MODIFY ("MDP_UTILISATEUR" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."UTILISATEURS" MODIFY ("ROLE_UTILISATEUR" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."UTILISATEURS" MODIFY ("CODE_DROIT" NOT NULL ENABLE);
  ALTER TABLE "PROJET2A"."UTILISATEURS" ADD CONSTRAINT "UTILISATEURS_PK" PRIMARY KEY ("ID_UTILISATEUR")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table COMMANDE_FOURNISSEUR
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."COMMANDE_FOURNISSEUR" ADD CONSTRAINT "COMMANDE_FOURNISSEUR_FK1" FOREIGN KEY ("ID_FOURNISSEUR")
	  REFERENCES "PROJET2A"."FOURNISSEUR" ("ID_FOURNISSEUR") ENABLE;
  ALTER TABLE "PROJET2A"."COMMANDE_FOURNISSEUR" ADD CONSTRAINT "COMMANDE_FOURNISSEUR_FK2" FOREIGN KEY ("ID_PRODUIT")
	  REFERENCES "PROJET2A"."PRODUIT" ("ID_PRODUIT") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table EVALUATION
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."EVALUATION" ADD CONSTRAINT "EVALUATION_FK1" FOREIGN KEY ("ID_FACTURE")
	  REFERENCES "PROJET2A"."TRANSACTION" ("ID_FACTURE") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table OFFRE
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."OFFRE" ADD CONSTRAINT "OFFRE_FK1" FOREIGN KEY ("ID_FOURNISSEUR")
	  REFERENCES "PROJET2A"."FOURNISSEUR" ("ID_FOURNISSEUR") ENABLE;
  ALTER TABLE "PROJET2A"."OFFRE" ADD CONSTRAINT "OFFRE_FK2" FOREIGN KEY ("ID_PRODUIT")
	  REFERENCES "PROJET2A"."PRODUIT" ("ID_PRODUIT") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table PLAT
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."PLAT" ADD CONSTRAINT "PLAT_FK1" FOREIGN KEY ("ID_MENU")
	  REFERENCES "PROJET2A"."MENU" ("ID_MENU") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table STOCKAGE
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."STOCKAGE" ADD CONSTRAINT "STOCKAGE_FK1" FOREIGN KEY ("ID_PRODUIT")
	  REFERENCES "PROJET2A"."PRODUIT" ("ID_PRODUIT") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table TABLES
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."TABLES" ADD CONSTRAINT "TABLES_FK1" FOREIGN KEY ("ID_COMMANDE")
	  REFERENCES "PROJET2A"."COMMANDE" ("ID_COMMANDE") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table TRANSACTION
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."TRANSACTION" ADD CONSTRAINT "TRANSACTION_FK1" FOREIGN KEY ("ID_UTILISATEUR")
	  REFERENCES "PROJET2A"."UTILISATEURS" ("ID_UTILISATEUR") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table UTILISATEURS
--------------------------------------------------------

  ALTER TABLE "PROJET2A"."UTILISATEURS" ADD CONSTRAINT "UTILISATEURS_FK1" FOREIGN KEY ("CODE_DROIT")
	  REFERENCES "PROJET2A"."DROITS_ACCES" ("CODE_DROIT") ENABLE;
