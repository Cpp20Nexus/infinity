//
// Created by JinHai on 2022/9/12.
//

#pragma once

#include "table_ref.h"
#include "planner/node/logical_table_scan.h"

#include <utility>

namespace infinity {

class BaseTableRef: public TableRef {
public:
    explicit BaseTableRef(SharedPtr<TableScanFunction> table_func,
                          SharedPtr<TableScanFunctionData> table_func_data,
                          const String& alias,
                          u64 table_index,
                          SharedPtr<Vector<String>> column_names,
                          SharedPtr<Vector<DataType>> column_types)
        : TableRef(TableRefType::kTable, alias),
          table_scan_func_(std::move(table_func)),
          table_scan_function_data_(std::move(table_func_data)),
          column_names_(std::move(column_names)),
          column_types_(std::move(column_types)),
          table_index_(table_index)
          {}

    SharedPtr<TableScanFunction> table_scan_func_{};
    SharedPtr<TableScanFunctionData> table_scan_function_data_{};

    SharedPtr<Vector<String>> column_names_{};
    SharedPtr<Vector<DataType>> column_types_{};
    u64 table_index_;
};

}