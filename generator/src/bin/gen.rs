use anyhow::{Ok, Result};
use generator::{generate, TaskData, TaskType};
use std::{
    fs::File,
    io::{BufWriter, Write},
};

fn main() -> Result<()> {
    let file = File::create("genenrate.c")?;
    let mut writer = BufWriter::new(file);
    generate(
        &mut writer,
        TaskData {
            report: 1,
            program: 1,
            task_type: TaskType::JS,
        },
    )?;

    writer.flush()?;

    Ok(())
}
