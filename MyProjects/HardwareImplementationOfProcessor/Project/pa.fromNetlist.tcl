
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Project -dir "C:/Users/user pc/Project/planAhead_run_1" -part xc3s100evq100-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/user pc/Project/demux_16_21.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/user pc/Project} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "demux_16_21.ucf" [current_fileset -constrset]
add_files [list {demux_16_21.ucf}] -fileset [get_property constrset [current_run]]
link_design
