use anyhow::Result;
use std::{
    io::{BufWriter, Write},
    writeln,
};

#[derive(PartialEq)]
pub enum TaskType {
    JS,
    KS,
}

pub struct TaskData {
    pub report: u32,
    pub program: u32,
    pub task_type: TaskType,
}

pub fn generate<W>(writer: &mut BufWriter<W>, data: TaskData) -> Result<()>
where
    W: Write,
{
    writeln!(
        writer,
        r##"
/* 23 豊島圭吾
 * 第{}回レポート プログラム{}
 */

#include <stdio.h>

int main(void) {{

    return 0;
}}

/* 実行結果 {}

 */
"##,
        data.report,
        data.program,
        if data.task_type == TaskType::KS {
            "23 豊島圭吾"
        } else {
            ""
        }
    )?;

    Ok(())
}
