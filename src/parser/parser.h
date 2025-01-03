/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_SQL_PARSER_H_INCLUDED
# define YY_SQL_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef SQLDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define SQLDEBUG 1
#  else
#   define SQLDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define SQLDEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined SQLDEBUG */
#if SQLDEBUG
extern int sqldebug;
#endif
/* "%code requires" blocks.  */
#line 11 "parser.y"


#include "expression.h"
#include "parser_result.h"
#include "defer_operation.h"
#include "statement/alter_statement.h"
#include "statement/copy_statement.h"
#include "statement/create_statement.h"
#include "statement/delete_statement.h"
#include "statement/drop_statement.h"
#include "statement/execute_statement.h"
#include "statement/explain_statement.h"
#include "statement/flush_statement.h"
#include "statement/optimize_statement.h"
#include "statement/insert_statement.h"
#include "statement/prepare_statement.h"
#include "statement/select_statement.h"
#include "statement/show_statement.h"
#include "statement/update_statement.h"
#include "statement/command_statement.h"
#include "statement/compact_statement.h"
#include "statement/admin_statement.h"
#include "table_reference/base_table_reference.h"
#include "table_reference/join_reference.h"
#include "table_reference/cross_product_reference.h"
#include "table_reference/table_reference.h"
#include "table_reference/subquery_reference.h"
#include "parser_helper.h"

#include <vector>

#define YYSTYPE SQLSTYPE
#define YYLTYPE SQLLTYPE

struct SQL_LTYPE {
    int first_line;
    int first_column;
    int last_line;
    int last_column;

    int total_column;
    int string_length;

    std::vector<void*> parameters;
};

#define SQLLTYPE SQL_LTYPE
#define SQLLTYPE_IS_DECLARED 1

#define YY_USER_ACTION \
    yylloc->first_line = yylloc->last_line;      \
    yylloc->first_column = yylloc->last_column;  \
    for(int i = 0; yytext[i] != '\0'; ++ i) {   \
        yylloc->total_column++;                   \
        yylloc->string_length++;                  \
        if (yytext[i] == '\n') {                  \
            yylloc->last_line++;                    \
            yylloc->last_column = 0;                \
        } else {                                  \
            yylloc->last_column++;                  \
        }                                         \
    }

#line 121 "parser.h"

/* Token kinds.  */
#ifndef SQLTOKENTYPE
# define SQLTOKENTYPE
  enum sqltokentype
  {
    SQLEMPTY = -2,
    SQLEOF = 0,                    /* "end of file"  */
    SQLerror = 256,                /* error  */
    SQLUNDEF = 257,                /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    STRING = 259,                  /* STRING  */
    DOUBLE_VALUE = 260,            /* DOUBLE_VALUE  */
    LONG_VALUE = 261,              /* LONG_VALUE  */
    CREATE = 262,                  /* CREATE  */
    SELECT = 263,                  /* SELECT  */
    INSERT = 264,                  /* INSERT  */
    DROP = 265,                    /* DROP  */
    UPDATE = 266,                  /* UPDATE  */
    DELETE = 267,                  /* DELETE  */
    COPY = 268,                    /* COPY  */
    SET = 269,                     /* SET  */
    EXPLAIN = 270,                 /* EXPLAIN  */
    SHOW = 271,                    /* SHOW  */
    ALTER = 272,                   /* ALTER  */
    EXECUTE = 273,                 /* EXECUTE  */
    PREPARE = 274,                 /* PREPARE  */
    UNION = 275,                   /* UNION  */
    ALL = 276,                     /* ALL  */
    INTERSECT = 277,               /* INTERSECT  */
    COMPACT = 278,                 /* COMPACT  */
    LOCK = 279,                    /* LOCK  */
    UNLOCK = 280,                  /* UNLOCK  */
    ADD = 281,                     /* ADD  */
    RENAME = 282,                  /* RENAME  */
    EXCEPT = 283,                  /* EXCEPT  */
    FLUSH = 284,                   /* FLUSH  */
    USE = 285,                     /* USE  */
    OPTIMIZE = 286,                /* OPTIMIZE  */
    PROPERTIES = 287,              /* PROPERTIES  */
    DATABASE = 288,                /* DATABASE  */
    TABLE = 289,                   /* TABLE  */
    COLLECTION = 290,              /* COLLECTION  */
    TABLES = 291,                  /* TABLES  */
    INTO = 292,                    /* INTO  */
    VALUES = 293,                  /* VALUES  */
    VIEW = 294,                    /* VIEW  */
    INDEX = 295,                   /* INDEX  */
    VIEWS = 296,                   /* VIEWS  */
    DATABASES = 297,               /* DATABASES  */
    SEGMENT = 298,                 /* SEGMENT  */
    SEGMENTS = 299,                /* SEGMENTS  */
    BLOCK = 300,                   /* BLOCK  */
    BLOCKS = 301,                  /* BLOCKS  */
    COLUMN = 302,                  /* COLUMN  */
    COLUMNS = 303,                 /* COLUMNS  */
    INDEXES = 304,                 /* INDEXES  */
    CHUNK = 305,                   /* CHUNK  */
    SYSTEM = 306,                  /* SYSTEM  */
    GROUP = 307,                   /* GROUP  */
    BY = 308,                      /* BY  */
    HAVING = 309,                  /* HAVING  */
    AS = 310,                      /* AS  */
    NATURAL = 311,                 /* NATURAL  */
    JOIN = 312,                    /* JOIN  */
    LEFT = 313,                    /* LEFT  */
    RIGHT = 314,                   /* RIGHT  */
    OUTER = 315,                   /* OUTER  */
    FULL = 316,                    /* FULL  */
    ON = 317,                      /* ON  */
    INNER = 318,                   /* INNER  */
    CROSS = 319,                   /* CROSS  */
    DISTINCT = 320,                /* DISTINCT  */
    WHERE = 321,                   /* WHERE  */
    ORDER = 322,                   /* ORDER  */
    LIMIT = 323,                   /* LIMIT  */
    OFFSET = 324,                  /* OFFSET  */
    ASC = 325,                     /* ASC  */
    DESC = 326,                    /* DESC  */
    IF = 327,                      /* IF  */
    NOT = 328,                     /* NOT  */
    EXISTS = 329,                  /* EXISTS  */
    IN = 330,                      /* IN  */
    FROM = 331,                    /* FROM  */
    TO = 332,                      /* TO  */
    WITH = 333,                    /* WITH  */
    DELIMITER = 334,               /* DELIMITER  */
    FORMAT = 335,                  /* FORMAT  */
    HEADER = 336,                  /* HEADER  */
    HIGHLIGHT = 337,               /* HIGHLIGHT  */
    CAST = 338,                    /* CAST  */
    END = 339,                     /* END  */
    CASE = 340,                    /* CASE  */
    ELSE = 341,                    /* ELSE  */
    THEN = 342,                    /* THEN  */
    WHEN = 343,                    /* WHEN  */
    UNNEST = 344,                  /* UNNEST  */
    BOOLEAN = 345,                 /* BOOLEAN  */
    INTEGER = 346,                 /* INTEGER  */
    INT = 347,                     /* INT  */
    TINYINT = 348,                 /* TINYINT  */
    SMALLINT = 349,                /* SMALLINT  */
    BIGINT = 350,                  /* BIGINT  */
    HUGEINT = 351,                 /* HUGEINT  */
    VARCHAR = 352,                 /* VARCHAR  */
    FLOAT = 353,                   /* FLOAT  */
    DOUBLE = 354,                  /* DOUBLE  */
    REAL = 355,                    /* REAL  */
    DECIMAL = 356,                 /* DECIMAL  */
    DATE = 357,                    /* DATE  */
    TIME = 358,                    /* TIME  */
    DATETIME = 359,                /* DATETIME  */
    FLOAT16 = 360,                 /* FLOAT16  */
    BFLOAT16 = 361,                /* BFLOAT16  */
    UNSIGNED = 362,                /* UNSIGNED  */
    TIMESTAMP = 363,               /* TIMESTAMP  */
    UUID = 364,                    /* UUID  */
    POINT = 365,                   /* POINT  */
    LINE = 366,                    /* LINE  */
    LSEG = 367,                    /* LSEG  */
    BOX = 368,                     /* BOX  */
    PATH = 369,                    /* PATH  */
    POLYGON = 370,                 /* POLYGON  */
    CIRCLE = 371,                  /* CIRCLE  */
    BLOB = 372,                    /* BLOB  */
    BITMAP = 373,                  /* BITMAP  */
    EMBEDDING = 374,               /* EMBEDDING  */
    VECTOR = 375,                  /* VECTOR  */
    BIT = 376,                     /* BIT  */
    TEXT = 377,                    /* TEXT  */
    MULTIVECTOR = 378,             /* MULTIVECTOR  */
    TENSOR = 379,                  /* TENSOR  */
    SPARSE = 380,                  /* SPARSE  */
    TENSORARRAY = 381,             /* TENSORARRAY  */
    IGNORE = 382,                  /* IGNORE  */
    PRIMARY = 383,                 /* PRIMARY  */
    KEY = 384,                     /* KEY  */
    UNIQUE = 385,                  /* UNIQUE  */
    NULLABLE = 386,                /* NULLABLE  */
    IS = 387,                      /* IS  */
    DEFAULT = 388,                 /* DEFAULT  */
    COMMENT = 389,                 /* COMMENT  */
    TRUE = 390,                    /* TRUE  */
    FALSE = 391,                   /* FALSE  */
    INTERVAL = 392,                /* INTERVAL  */
    SECOND = 393,                  /* SECOND  */
    SECONDS = 394,                 /* SECONDS  */
    MINUTE = 395,                  /* MINUTE  */
    MINUTES = 396,                 /* MINUTES  */
    HOUR = 397,                    /* HOUR  */
    HOURS = 398,                   /* HOURS  */
    DAY = 399,                     /* DAY  */
    DAYS = 400,                    /* DAYS  */
    MONTH = 401,                   /* MONTH  */
    MONTHS = 402,                  /* MONTHS  */
    YEAR = 403,                    /* YEAR  */
    YEARS = 404,                   /* YEARS  */
    EQUAL = 405,                   /* EQUAL  */
    NOT_EQ = 406,                  /* NOT_EQ  */
    LESS_EQ = 407,                 /* LESS_EQ  */
    GREATER_EQ = 408,              /* GREATER_EQ  */
    BETWEEN = 409,                 /* BETWEEN  */
    AND = 410,                     /* AND  */
    OR = 411,                      /* OR  */
    EXTRACT = 412,                 /* EXTRACT  */
    LIKE = 413,                    /* LIKE  */
    DATA = 414,                    /* DATA  */
    LOG = 415,                     /* LOG  */
    BUFFER = 416,                  /* BUFFER  */
    TRANSACTIONS = 417,            /* TRANSACTIONS  */
    TRANSACTION = 418,             /* TRANSACTION  */
    MEMINDEX = 419,                /* MEMINDEX  */
    USING = 420,                   /* USING  */
    SESSION = 421,                 /* SESSION  */
    GLOBAL = 422,                  /* GLOBAL  */
    OFF = 423,                     /* OFF  */
    EXPORT = 424,                  /* EXPORT  */
    CONFIGS = 425,                 /* CONFIGS  */
    CONFIG = 426,                  /* CONFIG  */
    PROFILES = 427,                /* PROFILES  */
    VARIABLES = 428,               /* VARIABLES  */
    VARIABLE = 429,                /* VARIABLE  */
    DELTA = 430,                   /* DELTA  */
    LOGS = 431,                    /* LOGS  */
    CATALOGS = 432,                /* CATALOGS  */
    CATALOG = 433,                 /* CATALOG  */
    SEARCH = 434,                  /* SEARCH  */
    MATCH = 435,                   /* MATCH  */
    MAXSIM = 436,                  /* MAXSIM  */
    QUERY = 437,                   /* QUERY  */
    QUERIES = 438,                 /* QUERIES  */
    FUSION = 439,                  /* FUSION  */
    ROWLIMIT = 440,                /* ROWLIMIT  */
    ADMIN = 441,                   /* ADMIN  */
    LEADER = 442,                  /* LEADER  */
    FOLLOWER = 443,                /* FOLLOWER  */
    LEARNER = 444,                 /* LEARNER  */
    CONNECT = 445,                 /* CONNECT  */
    STANDALONE = 446,              /* STANDALONE  */
    NODES = 447,                   /* NODES  */
    NODE = 448,                    /* NODE  */
    REMOVE = 449,                  /* REMOVE  */
    SNAPSHOT = 450,                /* SNAPSHOT  */
    SNAPSHOTS = 451,               /* SNAPSHOTS  */
    RECOVER = 452,                 /* RECOVER  */
    RESTORE = 453,                 /* RESTORE  */
    PERSISTENCE = 454,             /* PERSISTENCE  */
    OBJECT = 455,                  /* OBJECT  */
    OBJECTS = 456,                 /* OBJECTS  */
    FILES = 457,                   /* FILES  */
    MEMORY = 458,                  /* MEMORY  */
    ALLOCATION = 459,              /* ALLOCATION  */
    HISTORY = 460,                 /* HISTORY  */
    NUMBER = 461                   /* NUMBER  */
  };
  typedef enum sqltokentype sqltoken_kind_t;
#endif

/* Value type.  */
#if ! defined SQLSTYPE && ! defined SQLSTYPE_IS_DECLARED
union SQLSTYPE
{
#line 104 "parser.y"

    bool    bool_value;
    char*   str_value;
    double  double_value;
    int64_t long_value;

    infinity::BaseStatement*   base_stmt;
    infinity::SelectStatement* select_stmt;
    infinity::CopyStatement*   copy_stmt;
    infinity::InsertStatement* insert_stmt;
    infinity::UpdateStatement* update_stmt;
    infinity::DeleteStatement* delete_stmt;
    infinity::CreateStatement* create_stmt;
    infinity::DropStatement*   drop_stmt;
    infinity::PrepareStatement* prepare_stmt;
    infinity::ExecuteStatement* execute_stmt;
    infinity::AlterStatement*   alter_stmt;
    infinity::ShowStatement*    show_stmt;
    infinity::ExplainStatement* explain_stmt;
    infinity::FlushStatement*  flush_stmt;
    infinity::OptimizeStatement*  optimize_stmt;
    infinity::CommandStatement* command_stmt;
    infinity::CompactStatement* compact_stmt;
    infinity::AdminStatement* admin_stmt;

    std::vector<infinity::BaseStatement*>* stmt_array;

    std::vector<infinity::TableElement*>*  table_element_array_t;
    std::vector<infinity::ColumnDef*>*     column_def_array_t;
    infinity::TableElement*           table_element_t;
    infinity::ColumnDef*              table_column_t;
    infinity::ColumnType              column_type_t;
    infinity::ConstraintType          column_constraint_t;
    std::set<infinity::ConstraintType>* column_constraints_t;
    std::vector<std::string>*         identifier_array_t;
    infinity::TableConstraint*        table_constraint_t;

    infinity::BaseTableReference*     table_reference_t;
    infinity::TableAlias *            table_alias_t;
    infinity::JoinType                join_type_t;

    infinity::OrderByExpr*            order_by_expr_t;
    std::vector<infinity::OrderByExpr*>*   order_by_expr_list_t;
    infinity::OrderType               order_by_type_t;

    infinity::WithExpr*               with_expr_t;
    std::vector<infinity::WithExpr*>*      with_expr_list_t;

    infinity::SetOperatorType         set_operator_t;

    infinity::ExplainType             explain_type_t;

    infinity::ParsedExpr*             expr_t;
    infinity::ConstantExpr*           const_expr_t;
    std::vector<infinity::ParsedExpr*>*    expr_array_t;
    std::vector<infinity::InsertRowExpr*>*    insert_row_list_t;

    std::vector<infinity::WhenThen*>*     case_check_array_t;

    infinity::UpdateExpr*             update_expr_t;
    std::vector<infinity::UpdateExpr*>*    update_expr_array_t;

    infinity::TableName* table_name_t;
    infinity::CopyOption* copy_option_t;
    std::vector<infinity::CopyOption*>* copy_option_array;

    infinity::InitParameter*        index_param_t;
    std::vector<infinity::InitParameter*>* index_param_list_t;
    std::vector<infinity::InitParameter*>* with_index_param_list_t;

    infinity::IndexInfo* index_info_t;

    // infinity::IfExistsInfo*        if_exists_info_t;
    infinity::IfNotExistsInfo*     if_not_exists_info_t;

    std::pair<int64_t, int64_t>*    int_sparse_ele_t;
    std::pair<int64_t, double>*     float_sparse_ele_t;

#line 423 "parser.h"

};
typedef union SQLSTYPE SQLSTYPE;
# define SQLSTYPE_IS_TRIVIAL 1
# define SQLSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined SQLLTYPE && ! defined SQLLTYPE_IS_DECLARED
typedef struct SQLLTYPE SQLLTYPE;
struct SQLLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define SQLLTYPE_IS_DECLARED 1
# define SQLLTYPE_IS_TRIVIAL 1
#endif




int sqlparse (void *scanner, infinity::ParserResult* result);


#endif /* !YY_SQL_PARSER_H_INCLUDED  */
