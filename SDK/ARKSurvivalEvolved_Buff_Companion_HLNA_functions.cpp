// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Companion_HLNA_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerControllingValidPrimalChar
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::IsPlayerControllingValidPrimalChar(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerControllingValidPrimalChar");

	ABuff_Companion_HLNA_C_IsPlayerControllingValidPrimalChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.call finish on vr world
// ()

void ABuff_Companion_HLNA_C::call_finish_on_vr_world()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.call finish on vr world");

	ABuff_Companion_HLNA_C_call_finish_on_vr_world_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set player camera manager on death vfx manager
// ()

void ABuff_Companion_HLNA_C::set_player_camera_manager_on_death_vfx_manager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set player camera manager on death vfx manager");

	ABuff_Companion_HLNA_C_set_player_camera_manager_on_death_vfx_manager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.setup intro anim masking
// ()

void ABuff_Companion_HLNA_C::setup_intro_anim_masking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.setup intro anim masking");

	ABuff_Companion_HLNA_C_setup_intro_anim_masking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.destroy intro teleport sphere
// ()

void ABuff_Companion_HLNA_C::destroy_intro_teleport_sphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.destroy intro teleport sphere");

	ABuff_Companion_HLNA_C_destroy_intro_teleport_sphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn post mass teleport vfx
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::spawn_post_mass_teleport_vfx(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn post mass teleport vfx");

	ABuff_Companion_HLNA_C_spawn_post_mass_teleport_vfx_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn mass teleport vfx
// ()

void ABuff_Companion_HLNA_C::spawn_mass_teleport_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.spawn mass teleport vfx");

	ABuff_Companion_HLNA_C_spawn_mass_teleport_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pass Mass Teleport Event to Vfx And Destroy ref
// ()
// Parameters:
// TEnumAsByte<EMassTeleportState> State                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Pass_Mass_Teleport_Event_to_Vfx_And_Destroy_ref(TEnumAsByte<EMassTeleportState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pass Mass Teleport Event to Vfx And Destroy ref");

	ABuff_Companion_HLNA_C_Pass_Mass_Teleport_Event_to_Vfx_And_Destroy_ref_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.cancel mass teleport vfx
// ()

void ABuff_Companion_HLNA_C::cancel_mass_teleport_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.cancel mass teleport vfx");

	ABuff_Companion_HLNA_C_cancel_mass_teleport_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.pass players to teleport vfx
// ()
// Parameters:
// TArray<class FString>          teleporting_player_names       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_Companion_HLNA_C::pass_players_to_teleport_vfx(TArray<class FString>* teleporting_player_names)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.pass players to teleport vfx");

	ABuff_Companion_HLNA_C_pass_players_to_teleport_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (teleporting_player_names != nullptr)
		*teleporting_player_names = params.teleporting_player_names;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateSpawnedBeamParticle
// (Exec, Native, Event, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UParticleSystem*         ParticleTemplate               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EndPointActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::UpdateSpawnedBeamParticle(class UParticleSystem* ParticleTemplate, class AActor* EndPointActor, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateSpawnedBeamParticle");

	ABuff_Companion_HLNA_C_UpdateSpawnedBeamParticle_Params params;
	params.ParticleTemplate = ParticleTemplate;
	params.EndPointActor = EndPointActor;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pre Teleport Dismount
// ()

void ABuff_Companion_HLNA_C::Pre_Teleport_Dismount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Pre Teleport Dismount");

	ABuff_Companion_HLNA_C_Pre_Teleport_Dismount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.unmount teleporting players
// ()
// Parameters:
// TArray<class APrimalCharacter*> teleporting_players            (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_Companion_HLNA_C::unmount_teleporting_players(TArray<class APrimalCharacter*>* teleporting_players)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.unmount teleporting players");

	ABuff_Companion_HLNA_C_unmount_teleporting_players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (teleporting_players != nullptr)
		*teleporting_players = params.teleporting_players;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious or Dead Dinos
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABuff_Companion_HLNA_C::Notify_Players_That_They_Cant_Teleport_Unconsious_or_Dead_Dinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious or Dead Dinos");

	ABuff_Companion_HLNA_C_Notify_Players_That_They_Cant_Teleport_Unconsious_or_Dead_Dinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious Or Dead Players
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABuff_Companion_HLNA_C::Notify_Players_That_They_Cant_Teleport_Unconsious_Or_Dead_Players()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Cant Teleport Unconsious Or Dead Players");

	ABuff_Companion_HLNA_C_Notify_Players_That_They_Cant_Teleport_Unconsious_Or_Dead_Players_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Prevent Glitch Use Sphere Collision
// ()

void ABuff_Companion_HLNA_C::Prevent_Glitch_Use_Sphere_Collision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Prevent Glitch Use Sphere Collision");

	ABuff_Companion_HLNA_C_Prevent_Glitch_Use_Sphere_Collision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Exceed Final Boss player Count
// (Net, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABuff_Companion_HLNA_C::Notify_Players_That_They_Exceed_Final_Boss_player_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Players That They Exceed Final Boss player Count");

	ABuff_Companion_HLNA_C_Notify_Players_That_They_Exceed_Final_Boss_player_Count_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify players that they exceed final boss tame count
// (Net, Static, NetMulticast, MulticastDelegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABuff_Companion_HLNA_C::STATIC_notify_players_that_they_exceed_final_boss_tame_count()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify players that they exceed final boss tame count");

	ABuff_Companion_HLNA_C_notify_players_that_they_exceed_final_boss_tame_count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find associated anim texture from localized sound wave pairs
// (Native, Static, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FString                  sound_wave_path                (Parm, ZeroConstructor)
// class FString                  anim_texture_path              (Parm, OutParm, ZeroConstructor)

void ABuff_Companion_HLNA_C::STATIC_find_associated_anim_texture_from_localized_sound_wave_pairs(const class FString& sound_wave_path, TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>* Array, class FString* anim_texture_path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find associated anim texture from localized sound wave pairs");

	ABuff_Companion_HLNA_C_find_associated_anim_texture_from_localized_sound_wave_pairs_Params params;
	params.sound_wave_path = sound_wave_path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (anim_texture_path != nullptr)
		*anim_texture_path = params.anim_texture_path;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Recently Released ADS
// ()

void ABuff_Companion_HLNA_C::Recently_Released_ADS()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Recently Released ADS");

	ABuff_Companion_HLNA_C_Recently_Released_ADS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.begin scan random location orbit
// ()

void ABuff_Companion_HLNA_C::begin_scan_random_location_orbit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.begin scan random location orbit");

	ABuff_Companion_HLNA_C_begin_scan_random_location_orbit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is fixing glitch
// ()
// Parameters:
// bool                           is_fixing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::is_fixing_glitch(bool* is_fixing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is fixing glitch");

	ABuff_Companion_HLNA_C_is_fixing_glitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (is_fixing != nullptr)
		*is_fixing = params.is_fixing;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check if You Can Play Post Intro HLNA Target Alert Message
// ()

void ABuff_Companion_HLNA_C::Check_if_You_Can_Play_Post_Intro_HLNA_Target_Alert_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check if You Can Play Post Intro HLNA Target Alert Message");

	ABuff_Companion_HLNA_C_Check_if_You_Can_Play_Post_Intro_HLNA_Target_Alert_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro Mission Alert Message
// ()

void ABuff_Companion_HLNA_C::Show_Post_Intro_Mission_Alert_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro Mission Alert Message");

	ABuff_Companion_HLNA_C_Show_Post_Intro_Mission_Alert_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro HLNA Target Alert Message
// (NetReliable, Exec, Native, Event, Static, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABuff_Companion_HLNA_C::STATIC_Show_Post_Intro_HLNA_Target_Alert_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Post Intro HLNA Target Alert Message");

	ABuff_Companion_HLNA_C_Show_Post_Intro_HLNA_Target_Alert_Message_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reaction Equals Reaction
// (NetRequest, Exec, NetResponse, Static, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCompanionReactionData  reaction_1                     (Parm)
// struct FCompanionReactionData  reaction_2                     (Parm)
// bool                           is_equal                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::STATIC_Reaction_Equals_Reaction(const struct FCompanionReactionData& reaction_1, const struct FCompanionReactionData& reaction_2, bool* is_equal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reaction Equals Reaction");

	ABuff_Companion_HLNA_C_Reaction_Equals_Reaction_Params params;
	params.reaction_1 = reaction_1;
	params.reaction_2 = reaction_2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (is_equal != nullptr)
		*is_equal = params.is_equal;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set up aysnc loaded anim texture
// (NetReliable, Exec, Native, NetMulticast, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Eye_Only                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::set_up_aysnc_loaded_anim_texture(class UObject* InputPin, bool Eye_Only)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.set up aysnc loaded anim texture");

	ABuff_Companion_HLNA_C_set_up_aysnc_loaded_anim_texture_Params params;
	params.InputPin = InputPin;
	params.Eye_Only = Eye_Only;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player tpv and hlna is in the way
// ()
// Parameters:
// struct FVector                 loc_override                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_in_the_way                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::is_player_tpv_and_hlna_is_in_the_way(const struct FVector& loc_override, bool* is_in_the_way)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player tpv and hlna is in the way");

	ABuff_Companion_HLNA_C_is_player_tpv_and_hlna_is_in_the_way_Params params;
	params.loc_override = loc_override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (is_in_the_way != nullptr)
		*is_in_the_way = params.is_in_the_way;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force play mission alert
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Title                          (Parm, ZeroConstructor)
// class FString                  Label                          (Parm, ZeroConstructor)
// TEnumAsByte<EMissionAlertType> alert_type                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          display_time                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::force_play_mission_alert(const class FString& Title, const class FString& Label, TEnumAsByte<EMissionAlertType> alert_type, float display_time, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force play mission alert");

	ABuff_Companion_HLNA_C_force_play_mission_alert_Params params;
	params.Title = Title;
	params.Label = Label;
	params.alert_type = alert_type;
	params.display_time = display_time;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay to Play Hlna Subtitles Move Out Anim
// ()

void ABuff_Companion_HLNA_C::Delay_to_Play_Hlna_Subtitles_Move_Out_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay to Play Hlna Subtitles Move Out Anim");

	ABuff_Companion_HLNA_C_Delay_to_Play_Hlna_Subtitles_Move_Out_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.create dynamic materials
// (Exec, Static, NetMulticast, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABuff_Companion_HLNA_C::STATIC_create_dynamic_materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.create dynamic materials");

	ABuff_Companion_HLNA_C_create_dynamic_materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clear Async Loaded Audio
// ()

void ABuff_Companion_HLNA_C::Clear_Async_Loaded_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clear Async Loaded Audio");

	ABuff_Companion_HLNA_C_Clear_Async_Loaded_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Player On Mission
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret_Val                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AMissionType*            active_mission                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Is_Player_On_Mission(class AShooterCharacter* Player, bool* Ret_Val, class AMissionType** active_mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Player On Mission");

	ABuff_Companion_HLNA_C_Is_Player_On_Mission_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret_Val != nullptr)
		*Ret_Val = params.Ret_Val;
	if (active_mission != nullptr)
		*active_mission = params.active_mission;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player on mission and cant teleport
// ()
// Parameters:
// class AShooterCharacter*       InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret_Val                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::is_player_on_mission_and_cant_teleport(class AShooterCharacter* InputPin, bool* Ret_Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.is player on mission and cant teleport");

	ABuff_Companion_HLNA_C_is_player_on_mission_and_cant_teleport_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret_Val != nullptr)
		*Ret_Val = params.Ret_Val;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Mission
// (Net, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABuff_Companion_HLNA_C::STATIC_Notify_Player_That_They_Cannot_Teleport_Players_On_Mission()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Mission");

	ABuff_Companion_HLNA_C_Notify_Player_That_They_Cannot_Teleport_Players_On_Mission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Colliding with Something
// ()

void ABuff_Companion_HLNA_C::Colliding_with_Something()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Colliding with Something");

	ABuff_Companion_HLNA_C_Colliding_with_Something_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffDeactivated
// ()
// Parameters:
// class APrimalBuff**            OtherBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BPNotifyOtherBuffDeactivated(class APrimalBuff** OtherBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffDeactivated");

	ABuff_Companion_HLNA_C_BPNotifyOtherBuffDeactivated_Params params;
	params.OtherBuff = OtherBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionAbleToMonologue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Companion_HLNA_C::IsCompanionAbleToMonologue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionAbleToMonologue");

	ABuff_Companion_HLNA_C_IsCompanionAbleToMonologue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Awaiting Set Of Initial Spawn Intro Anim Timer
// ()

void ABuff_Companion_HLNA_C::Awaiting_Set_Of_Initial_Spawn_Intro_Anim_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Awaiting Set Of Initial Spawn Intro Anim Timer");

	ABuff_Companion_HLNA_C_Awaiting_Set_Of_Initial_Spawn_Intro_Anim_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Large Dinos To Final Boss
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABuff_Companion_HLNA_C::STATIC_Notify_Player_That_They_Cannot_Teleport_Large_Dinos_To_Final_Boss()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Large Dinos To Final Boss");

	ABuff_Companion_HLNA_C_Notify_Player_That_They_Cannot_Teleport_Large_Dinos_To_Final_Boss_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Seated Structures
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABuff_Companion_HLNA_C::STATIC_Notify_Player_That_They_Cannot_Teleport_Players_On_Seated_Structures()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Players On Seated Structures");

	ABuff_Companion_HLNA_C_Notify_Player_That_They_Cannot_Teleport_Players_On_Seated_Structures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Temp Keep Movement Volume Up
// ()

void ABuff_Companion_HLNA_C::Temp_Keep_Movement_Volume_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Temp Keep Movement Volume Up");

	ABuff_Companion_HLNA_C_Temp_Keep_Movement_Volume_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Intro sphere Mask Amount
// ()
// Parameters:
// float                          InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Set_Intro_sphere_Mask_Amount(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Intro sphere Mask Amount");

	ABuff_Companion_HLNA_C_Set_Intro_sphere_Mask_Amount_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Move Cuz In The Way
// ()

void ABuff_Companion_HLNA_C::Move_Cuz_In_The_Way()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Move Cuz In The Way");

	ABuff_Companion_HLNA_C_Move_Cuz_In_The_Way_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.should hlna move away from the camera
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::should_hlna_move_away_from_the_camera(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.should hlna move away from the camera");

	ABuff_Companion_HLNA_C_should_hlna_move_away_from_the_camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Probably Firing
// ()

void ABuff_Companion_HLNA_C::Is_Probably_Firing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Is Probably Firing");

	ABuff_Companion_HLNA_C_Is_Probably_Firing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStopFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BPHandleOnStopFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStopFire");

	ABuff_Companion_HLNA_C_BPHandleOnStopFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Getting In Front Of Camera During Firing Or Ads
// ()

void ABuff_Companion_HLNA_C::Restrict_Getting_In_Front_Of_Camera_During_Firing_Or_Ads()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Getting In Front Of Camera During Firing Or Ads");

	ABuff_Companion_HLNA_C_Restrict_Getting_In_Front_Of_Camera_During_Firing_Or_Ads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.StopCompanionEvent
// ()

void ABuff_Companion_HLNA_C::StopCompanionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.StopCompanionEvent");

	ABuff_Companion_HLNA_C_StopCompanionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FocusOnRemoteTarget
// (NetReliable, NetRequest, Exec, NetResponse, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)

void ABuff_Companion_HLNA_C::FocusOnRemoteTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FocusOnRemoteTarget");

	ABuff_Companion_HLNA_C_FocusOnRemoteTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play focused scan sfx and vfx
// ()

void ABuff_Companion_HLNA_C::play_focused_scan_sfx_and_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play focused scan sfx and vfx");

	ABuff_Companion_HLNA_C_play_focused_scan_sfx_and_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Focused Selected Remote Target Timeout
// ()

void ABuff_Companion_HLNA_C::Focused_Selected_Remote_Target_Timeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Focused Selected Remote Target Timeout");

	ABuff_Companion_HLNA_C_Focused_Selected_Remote_Target_Timeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon sfx
// ()

void ABuff_Companion_HLNA_C::play_hexagon_sfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon sfx");

	ABuff_Companion_HLNA_C_play_hexagon_sfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnHexagons
// ()
// Parameters:
// float*                         OverrideCollectSFXVolume       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          VFXImmediatelyAttracts         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::OnSpawnHexagons(float* OverrideCollectSFXVolume, bool* VFXImmediatelyAttracts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnHexagons");

	ABuff_Companion_HLNA_C_OnSpawnHexagons_Params params;
	params.OverrideCollectSFXVolume = OverrideCollectSFXVolume;
	params.VFXImmediatelyAttracts = VFXImmediatelyAttracts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMadeHexagonPurchase
// ()

void ABuff_Companion_HLNA_C::OnMadeHexagonPurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMadeHexagonPurchase");

	ABuff_Companion_HLNA_C_OnMadeHexagonPurchase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger to VR Boss Battle Flow Test
// ()

void ABuff_Companion_HLNA_C::HLNa_Mass_Teleport_Trigger_to_VR_Boss_Battle_Flow_Test()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger to VR Boss Battle Flow Test");

	ABuff_Companion_HLNA_C_HLNa_Mass_Teleport_Trigger_to_VR_Boss_Battle_Flow_Test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find or get mission dispatcher
// ()
// Parameters:
// class AMissionDispatcher*      AsMissionDispatcher            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::find_or_get_mission_dispatcher(class AMissionDispatcher** AsMissionDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.find or get mission dispatcher");

	ABuff_Companion_HLNA_C_find_or_get_mission_dispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsMissionDispatcher != nullptr)
		*AsMissionDispatcher = params.AsMissionDispatcher;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Remove Cosmetic HLNA
// ()

void ABuff_Companion_HLNA_C::Remove_Cosmetic_HLNA()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Remove Cosmetic HLNA");

	ABuff_Companion_HLNA_C_Remove_Cosmetic_HLNA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.RefreshCompanionColorization
// (Exec, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)

void ABuff_Companion_HLNA_C::STATIC_RefreshCompanionColorization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.RefreshCompanionColorization");

	ABuff_Companion_HLNA_C_RefreshCompanionColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start boss battle
// (Event, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class UClass*                  InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::start_boss_battle(class UClass* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start boss battle");

	ABuff_Companion_HLNA_C_start_boss_battle_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start mission and set reverse teleports
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)

void ABuff_Companion_HLNA_C::STATIC_start_mission_and_set_reverse_teleports()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start mission and set reverse teleports");

	ABuff_Companion_HLNA_C_start_mission_and_set_reverse_teleports_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Return Teleport Locations
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)

void ABuff_Companion_HLNA_C::STATIC_Set_Return_Teleport_Locations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Return Teleport Locations");

	ABuff_Companion_HLNA_C_Set_Return_Teleport_Locations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPGetMultiUseEntries
// (NetReliable, Native, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_Companion_HLNA_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPGetMultiUseEntries");

	ABuff_Companion_HLNA_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Hard
// ()

void ABuff_Companion_HLNA_C::HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Hard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Hard");

	ABuff_Companion_HLNA_C_HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Hard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Med
// ()

void ABuff_Companion_HLNA_C::HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Med()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Med");

	ABuff_Companion_HLNA_C_HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Med_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Easy
// ()

void ABuff_Companion_HLNA_C::HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Easy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNa Mass Teleport Trigger To VR Boss Battle Easy");

	ABuff_Companion_HLNA_C_HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Easy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.sync mission complete status
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)

void ABuff_Companion_HLNA_C::sync_mission_complete_status()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.sync mission complete status");

	ABuff_Companion_HLNA_C_sync_mission_complete_status_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Sync Mission Complete Status
// ()

void ABuff_Companion_HLNA_C::Restrict_Sync_Mission_Complete_Status()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Sync Mission Complete Status");

	ABuff_Companion_HLNA_C_Restrict_Sync_Mission_Complete_Status_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.format VR boss battle teleport multiuse options
// ()
// Parameters:
// int                            Required_Missions              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Mission_Title                  (Parm, ZeroConstructor)
// bool                           Requires_All_Story_Glitches    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Appended_String                (Parm, OutParm, ZeroConstructor)
// bool                           Disabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::format_VR_boss_battle_teleport_multiuse_options(int Required_Missions, const class FString& Mission_Title, bool Requires_All_Story_Glitches, class FString* Appended_String, bool* Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.format VR boss battle teleport multiuse options");

	ABuff_Companion_HLNA_C_format_VR_boss_battle_teleport_multiuse_options_Params params;
	params.Required_Missions = Required_Missions;
	params.Mission_Title = Mission_Title;
	params.Requires_All_Story_Glitches = Requires_All_Story_Glitches;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Appended_String != nullptr)
		*Appended_String = params.Appended_String;
	if (Disabled != nullptr)
		*Disabled = params.Disabled;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted_Timed_Hexagon_Collection
// ()

void ABuff_Companion_HLNA_C::Restricted_Timed_Hexagon_Collection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted_Timed_Hexagon_Collection");

	ABuff_Companion_HLNA_C_Restricted_Timed_Hexagon_Collection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.restricted time since last played movement sounds
// ()

void ABuff_Companion_HLNA_C::restricted_time_since_last_played_movement_sounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.restricted time since last played movement sounds");

	ABuff_Companion_HLNA_C_restricted_time_since_last_played_movement_sounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play movement sound
// ()
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Play_movement_sound(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play movement sound");

	ABuff_Companion_HLNA_C_Play_movement_sound_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Randomly pick orbit location
// ()

void ABuff_Companion_HLNA_C::Randomly_pick_orbit_location()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Randomly pick orbit location");

	ABuff_Companion_HLNA_C_Randomly_pick_orbit_location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Fish
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)

void ABuff_Companion_HLNA_C::Notify_Player_That_They_Cannot_Teleport_Fish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Notify Player That They Cannot Teleport Fish");

	ABuff_Companion_HLNA_C_Notify_Player_That_They_Cannot_Teleport_Fish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify player that they cannot teleport rafts
// (NetRequest, Static, NetMulticast, Public, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)

void ABuff_Companion_HLNA_C::STATIC_notify_player_that_they_cannot_teleport_rafts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.notify player that they cannot teleport rafts");

	ABuff_Companion_HLNA_C_notify_player_that_they_cannot_teleport_rafts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Respawn Anim
// ()

void ABuff_Companion_HLNA_C::Play_HLNA_Respawn_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Respawn Anim");

	ABuff_Companion_HLNA_C_Play_HLNA_Respawn_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play spawn anim
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class UClass*                  anActorClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            AnimToPlay                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::STATIC_play_spawn_anim(class UClass* anActorClass, class UAnimMontage* AnimToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play spawn anim");

	ABuff_Companion_HLNA_C_play_spawn_anim_Params params;
	params.anActorClass = anActorClass;
	params.AnimToPlay = AnimToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Play Localized Audio cue
// ()
// Parameters:
// struct FHLNALocalizedAudioEntry HLNALocalizedAudioEntry        (Parm, OutParm, ReferenceParm)
// bool                           Play_Anim_Textures             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Simple_Play_Localized_Audio_cue(bool Play_Anim_Textures, struct FHLNALocalizedAudioEntry* HLNALocalizedAudioEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Play Localized Audio cue");

	ABuff_Companion_HLNA_C_Simple_Play_Localized_Audio_cue_Params params;
	params.Play_Anim_Textures = Play_Anim_Textures;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HLNALocalizedAudioEntry != nullptr)
		*HLNALocalizedAudioEntry = params.HLNALocalizedAudioEntry;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPAnimNotifyCustomEvent");

	ABuff_Companion_HLNA_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set All Components Custom Depth Stencil Value
// ()
// Parameters:
// int                            stencil_Value                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Set_All_Components_Custom_Depth_Stencil_Value(int stencil_Value, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set All Components Custom Depth Stencil Value");

	ABuff_Companion_HLNA_C_Set_All_Components_Custom_Depth_Stencil_Value_Params params;
	params.stencil_Value = stencil_Value;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayEnvironmentalCompanionReaction
// ()
// Parameters:
// struct FCompanionReactionData  CanPlayReactionData            (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Companion_HLNA_C::CanPlayEnvironmentalCompanionReaction(struct FCompanionReactionData* CanPlayReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayEnvironmentalCompanionReaction");

	ABuff_Companion_HLNA_C_CanPlayEnvironmentalCompanionReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPlayReactionData != nullptr)
		*CanPlayReactionData = params.CanPlayReactionData;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server Update Purchasable Items
// ()

void ABuff_Companion_HLNA_C::Server_Update_Purchasable_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server Update Purchasable Items");

	ABuff_Companion_HLNA_C_Server_Update_Purchasable_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted Interval For Checking Updated Hex Store Purchasable Items
// ()

void ABuff_Companion_HLNA_C::Restricted_Interval_For_Checking_Updated_Hex_Store_Purchasable_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restricted Interval For Checking Updated Hex Store Purchasable Items");

	ABuff_Companion_HLNA_C_Restricted_Interval_For_Checking_Updated_Hex_Store_Purchasable_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Initial Spawn Anim
// ()

void ABuff_Companion_HLNA_C::Play_HLNA_Initial_Spawn_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play HLNA Initial Spawn Anim");

	ABuff_Companion_HLNA_C_Play_HLNA_Initial_Spawn_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Companion is in first person in a seat
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Companion_is_in_first_person_in_a_seat(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Companion is in first person in a seat");

	ABuff_Companion_HLNA_C_Companion_is_in_first_person_in_a_seat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finish Intro Anim
// ()

void ABuff_Companion_HLNA_C::Finish_Intro_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finish Intro Anim");

	ABuff_Companion_HLNA_C_Finish_Intro_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyHasTamedDino
// ()
// Parameters:
// class UClass**                 DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::NotifyHasTamedDino(class UClass** DinoClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyHasTamedDino");

	ABuff_Companion_HLNA_C_NotifyHasTamedDino_Params params;
	params.DinoClass = DinoClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyItemCrafted
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::NotifyItemCrafted(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyItemCrafted");

	ABuff_Companion_HLNA_C_NotifyItemCrafted_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Keep Eye Hidden For Emotes
// (NetRequest, Event, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)

void ABuff_Companion_HLNA_C::STATIC_Keep_Eye_Hidden_For_Emotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Keep Eye Hidden For Emotes");

	ABuff_Companion_HLNA_C_Keep_Eye_Hidden_For_Emotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickClient
// (NetRequest, Native, Event, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::STATIC_BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickClient");

	ABuff_Companion_HLNA_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Delay Between Environmental Reactions
// ()

void ABuff_Companion_HLNA_C::Reset_Delay_Between_Environmental_Reactions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Delay Between Environmental Reactions");

	ABuff_Companion_HLNA_C_Reset_Delay_Between_Environmental_Reactions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Recieve Damage For Reactions
// ()

void ABuff_Companion_HLNA_C::Check_Recieve_Damage_For_Reactions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Recieve Damage For Reactions");

	ABuff_Companion_HLNA_C_Check_Recieve_Damage_For_Reactions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Recent Damage Recieved
// ()

void ABuff_Companion_HLNA_C::Reset_Recent_Damage_Recieved()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Reset Recent Damage Recieved");

	ABuff_Companion_HLNA_C_Reset_Recent_Damage_Recieved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Companion_HLNA_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPServerHandleNetExecCommand");

	ABuff_Companion_HLNA_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play World Reaction
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FCompanionReactionData  WithReactionData               (Parm, OutParm, ReferenceParm)

void ABuff_Companion_HLNA_C::STATIC_Play_World_Reaction(struct FCompanionReactionData* WithReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play World Reaction");

	ABuff_Companion_HLNA_C_Play_World_Reaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithReactionData != nullptr)
		*WithReactionData = params.WithReactionData;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Interval to check for HLNA world reactions
// ()

void ABuff_Companion_HLNA_C::Interval_to_check_for_HLNA_world_reactions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Interval to check for HLNA world reactions");

	ABuff_Companion_HLNA_C_Interval_to_check_for_HLNA_world_reactions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Random World Reactions
// ()

void ABuff_Companion_HLNA_C::Restrict_Random_World_Reactions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Restrict Random World Reactions");

	ABuff_Companion_HLNA_C_Restrict_Random_World_Reactions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Current Status of various things to react to
// ()

void ABuff_Companion_HLNA_C::Check_Current_Status_of_various_things_to_react_to()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Check Current Status of various things to react to");

	ABuff_Companion_HLNA_C_Check_Current_Status_of_various_things_to_react_to_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInventoryItemUsed
// (Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class UObject**                InventoryItemObject            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BPInventoryItemUsed(class UObject** InventoryItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInventoryItemUsed");

	ABuff_Companion_HLNA_C_BPInventoryItemUsed_Params params;
	params.InventoryItemObject = InventoryItemObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPDeactivated");

	ABuff_Companion_HLNA_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffActivated
// ()
// Parameters:
// class APrimalBuff**            OtherBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BPNotifyOtherBuffActivated(class APrimalBuff** OtherBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyOtherBuffActivated");

	ABuff_Companion_HLNA_C_BPNotifyOtherBuffActivated_Params params;
	params.OtherBuff = OtherBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyExperienceGained
// ()
// Parameters:
// float*                         ActualExpGained                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ExpectedExpGain                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EXPType>*          ExpTypeGained                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BPNotifyExperienceGained(float* ActualExpGained, float* ExpectedExpGain, TEnumAsByte<EXPType>* ExpTypeGained)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPNotifyExperienceGained");

	ABuff_Companion_HLNA_C_BPNotifyExperienceGained_Params params;
	params.ActualExpGained = ActualExpGained;
	params.ExpectedExpGain = ExpectedExpGain;
	params.ExpTypeGained = ExpTypeGained;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInstigatorDied
// ()

void ABuff_Companion_HLNA_C::BPInstigatorDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPInstigatorDied");

	ABuff_Companion_HLNA_C_BPInstigatorDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPHandleOnStartFire");

	ABuff_Companion_HLNA_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayJustAboutToTeleportReaction
// ()

void ABuff_Companion_HLNA_C::PlayJustAboutToTeleportReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayJustAboutToTeleportReaction");

	ABuff_Companion_HLNA_C_PlayJustAboutToTeleportReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScanDispatcher
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::FinishedScanDispatcher(class AShooterCharacter* ShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScanDispatcher");

	ABuff_Companion_HLNA_C_FinishedScanDispatcher_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScan
// ()

void ABuff_Companion_HLNA_C::FinishedScan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.FinishedScan");

	ABuff_Companion_HLNA_C_FinishedScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scan Reactions
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FCompanionReactionData  Post_Scan_Reaction             (Parm)
// float                          Override_Scan_Duration         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Total_Reactions_Duration       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Play_Scan_Reactions(const struct FCompanionReactionData& Post_Scan_Reaction, float Override_Scan_Duration, float* Total_Reactions_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scan Reactions");

	ABuff_Companion_HLNA_C_Play_Scan_Reactions_Params params;
	params.Post_Scan_Reaction = Post_Scan_Reaction;
	params.Override_Scan_Duration = Override_Scan_Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Total_Reactions_Duration != nullptr)
		*Total_Reactions_Duration = params.Total_Reactions_Duration;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clean Up Teleport VFX
// ()

void ABuff_Companion_HLNA_C::Clean_Up_Teleport_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Clean Up Teleport VFX");

	ABuff_Companion_HLNA_C_Clean_Up_Teleport_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.On Mass Teleport Event VFX
// ()
// Parameters:
// TEnumAsByte<EMassTeleportState> Event                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::On_Mass_Teleport_Event_VFX(TEnumAsByte<EMassTeleportState> Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.On Mass Teleport Event VFX");

	ABuff_Companion_HLNA_C_On_Mass_Teleport_Event_VFX_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Find Best Teleport Location
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// int                            selected_coordinate_direction_index (Parm, ZeroConstructor, IsPlainOldData)
// int                            region_index                   (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Player_Controller              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           only_test_if_theres_any_available (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has_Found_Spot                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::STATIC_Find_Best_Teleport_Location(int selected_coordinate_direction_index, int region_index, class APlayerController* Player_Controller, bool only_test_if_theres_any_available, bool* Has_Found_Spot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Find Best Teleport Location");

	ABuff_Companion_HLNA_C_Find_Best_Teleport_Location_Params params;
	params.selected_coordinate_direction_index = selected_coordinate_direction_index;
	params.region_index = region_index;
	params.Player_Controller = Player_Controller;
	params.only_test_if_theres_any_available = only_test_if_theres_any_available;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Has_Found_Spot != nullptr)
		*Has_Found_Spot = params.Has_Found_Spot;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyDamage
// ()
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TheDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyDamage");

	ABuff_Companion_HLNA_C_NotifyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageClass = DamageClass;
	params.EventInstigator = EventInstigator;
	params.TheDamageCauser = TheDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Best Teleport Spot From Sorted Start Points
// (NetReliable, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// TArray<class AActor*>          Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           able_to_set_spot               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Set_Best_Teleport_Spot_From_Sorted_Start_Points(TArray<class AActor*>* Array, bool* able_to_set_spot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Set Best Teleport Spot From Sorted Start Points");

	ABuff_Companion_HLNA_C_Set_Best_Teleport_Spot_From_Sorted_Start_Points_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (able_to_set_spot != nullptr)
		*able_to_set_spot = params.able_to_set_spot;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get Biome Names
// ()
// Parameters:
// TArray<class FString>          OverridePlayerSpawnRegions     (Parm, OutParm, ZeroConstructor)

void ABuff_Companion_HLNA_C::Get_Biome_Names(TArray<class FString>* OverridePlayerSpawnRegions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Get Biome Names");

	ABuff_Companion_HLNA_C_Get_Biome_Names_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverridePlayerSpawnRegions != nullptr)
		*OverridePlayerSpawnRegions = params.OverridePlayerSpawnRegions;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCompanionWorldLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_Companion_HLNA_C::GetCompanionWorldLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCompanionWorldLocation");

	ABuff_Companion_HLNA_C_GetCompanionWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCurrentOrbitRadius
// ()
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::GetCurrentOrbitRadius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetCurrentOrbitRadius");

	ABuff_Companion_HLNA_C_GetCurrentOrbitRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPOnOwnerMassTeleportEvent
// ()
// Parameters:
// TEnumAsByte<EMassTeleportState>* EventState                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter**       TeleportInitiatedByChar        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BPOnOwnerMassTeleportEvent(TEnumAsByte<EMassTeleportState>* EventState, class APrimalCharacter** TeleportInitiatedByChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPOnOwnerMassTeleportEvent");

	ABuff_Companion_HLNA_C_BPOnOwnerMassTeleportEvent_Params params;
	params.EventState = EventState;
	params.TeleportInitiatedByChar = TeleportInitiatedByChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMassTeleportEventReceived
// ()
// Parameters:
// TEnumAsByte<EMassTeleportState> EventState                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::OnMassTeleportEventReceived(TEnumAsByte<EMassTeleportState> EventState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnMassTeleportEventReceived");

	ABuff_Companion_HLNA_C_OnMassTeleportEventReceived_Params params;
	params.EventState = EventState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Cancel
// ()

void ABuff_Companion_HLNA_C::HLNaMassTeleport_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Cancel");

	ABuff_Companion_HLNA_C_HLNaMassTeleport_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CleanUpMassTeleport
// ()

void ABuff_Companion_HLNA_C::CleanUpMassTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CleanUpMassTeleport");

	ABuff_Companion_HLNA_C_CleanUpMassTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionState
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Tick_UpdateCompanionState(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionState");

	ABuff_Companion_HLNA_C_Tick_UpdateCompanionState_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPTryMultiUse
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Companion_HLNA_C::STATIC_BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPTryMultiUse");

	ABuff_Companion_HLNA_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_SearchForMassTeleportChars
// ()
// Parameters:
// bool                           bIsFinalCheck                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Tick_SearchForMassTeleportChars(bool bIsFinalCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_SearchForMassTeleportChars");

	ABuff_Companion_HLNA_C_Tick_SearchForMassTeleportChars_Params params;
	params.bIsFinalCheck = bIsFinalCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BuffTickServer");

	ABuff_Companion_HLNA_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Trigger
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)

void ABuff_Companion_HLNA_C::STATIC_HLNaMassTeleport_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Trigger");

	ABuff_Companion_HLNA_C_HLNaMassTeleport_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Start
// ()
// Parameters:
// int                            region_index                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Teleport_To_VR_Boss_Battle_easy (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Teleport_To_VR_Boss_Battle_med (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Teleport_To_VR_Boss_Battle_hard (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Teleport_To_VR_Boss_Battle_FLOW_TEST (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::HLNaMassTeleport_Start(int region_index, bool Teleport_To_VR_Boss_Battle_easy, bool Teleport_To_VR_Boss_Battle_med, bool Teleport_To_VR_Boss_Battle_hard, bool Teleport_To_VR_Boss_Battle_FLOW_TEST)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.HLNaMassTeleport_Start");

	ABuff_Companion_HLNA_C_HLNaMassTeleport_Start_Params params;
	params.region_index = region_index;
	params.Teleport_To_VR_Boss_Battle_easy = Teleport_To_VR_Boss_Battle_easy;
	params.Teleport_To_VR_Boss_Battle_med = Teleport_To_VR_Boss_Battle_med;
	params.Teleport_To_VR_Boss_Battle_hard = Teleport_To_VR_Boss_Battle_hard;
	params.Teleport_To_VR_Boss_Battle_FLOW_TEST = Teleport_To_VR_Boss_Battle_FLOW_TEST;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetTeleportationDestinations
// (NetReliable, NetRequest, Exec, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// TArray<struct FTeleportDestination> Destinations                   (Parm, OutParm, ZeroConstructor)

void ABuff_Companion_HLNA_C::GetTeleportationDestinations(TArray<struct FTeleportDestination>* Destinations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetTeleportationDestinations");

	ABuff_Companion_HLNA_C_GetTeleportationDestinations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destinations != nullptr)
		*Destinations = params.Destinations;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetLookAtPlayerRotation
// ()
// Parameters:
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::GetLookAtPlayerRotation(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetLookAtPlayerRotation");

	ABuff_Companion_HLNA_C_GetLookAtPlayerRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetAnimMoveVelocityAxes
// (NetReliable, Exec, NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                 VelocityAxes                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::GetAnimMoveVelocityAxes(struct FVector* VelocityAxes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetAnimMoveVelocityAxes");

	ABuff_Companion_HLNA_C_GetAnimMoveVelocityAxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VelocityAxes != nullptr)
		*VelocityAxes = params.VelocityAxes;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ShouldBeCompact
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::ShouldBeCompact(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ShouldBeCompact");

	ABuff_Companion_HLNA_C_ShouldBeCompact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Determine Best Teleport Spot
// ()

void ABuff_Companion_HLNA_C::Determine_Best_Teleport_Spot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Determine Best Teleport Spot");

	ABuff_Companion_HLNA_C_Determine_Best_Teleport_Spot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionEventStarted
// ()
// Parameters:
// struct FCompanionEventData     StartingEventData              (Parm, OutParm, ReferenceParm)

void ABuff_Companion_HLNA_C::OnCompanionEventStarted(struct FCompanionEventData* StartingEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionEventStarted");

	ABuff_Companion_HLNA_C_OnCompanionEventStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartingEventData != nullptr)
		*StartingEventData = params.StartingEventData;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanStartCompanionEvent
// ()
// Parameters:
// class AActor**                 EventActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FCompanionEventData     WithEventData                  (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Companion_HLNA_C::CanStartCompanionEvent(class AActor** EventActor, struct FCompanionEventData* WithEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanStartCompanionEvent");

	ABuff_Companion_HLNA_C_CanStartCompanionEvent_Params params;
	params.EventActor = EventActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithEventData != nullptr)
		*WithEventData = params.WithEventData;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionPlayed
// ()
// Parameters:
// struct FCompanionReactionData  PlayedReactionData             (Parm, OutParm, ReferenceParm)
// int*                           UniqueID                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::OnCompanionReactionPlayed(int* UniqueID, struct FCompanionReactionData* PlayedReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionPlayed");

	ABuff_Companion_HLNA_C_OnCompanionReactionPlayed_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayedReactionData != nullptr)
		*PlayedReactionData = params.PlayedReactionData;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SetCompactState
// ()
// Parameters:
// bool                           bNewCompactState               (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::SetCompactState(bool bNewCompactState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SetCompactState");

	ABuff_Companion_HLNA_C_SetCompactState_Params params;
	params.bNewCompactState = bNewCompactState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionStopped
// (NetReliable, Native, Event, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FCompanionReactionData  StoppedReactionData            (Parm, OutParm, ReferenceParm)
// int*                           UniqueID                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::STATIC_OnCompanionReactionStopped(int* UniqueID, struct FCompanionReactionData* StoppedReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionReactionStopped");

	ABuff_Companion_HLNA_C_OnCompanionReactionStopped_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StoppedReactionData != nullptr)
		*StoppedReactionData = params.StoppedReactionData;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayCompanionReaction
// ()
// Parameters:
// struct FCompanionReactionData  CanPlayReactionData            (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Companion_HLNA_C::CanPlayCompanionReaction(struct FCompanionReactionData* CanPlayReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CanPlayCompanionReaction");

	ABuff_Companion_HLNA_C_CanPlayCompanionReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPlayReactionData != nullptr)
		*CanPlayReactionData = params.CanPlayReactionData;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateHLNaSounds
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Tick_UpdateHLNaSounds(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateHLNaSounds");

	ABuff_Companion_HLNA_C_Tick_UpdateHLNaSounds_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompactMode
// ()

void ABuff_Companion_HLNA_C::Tick_CompactMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompactMode");

	ABuff_Companion_HLNA_C_Tick_CompactMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCurrentEventMonalogue
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::STATIC_IsCurrentEventMonalogue(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCurrentEventMonalogue");

	ABuff_Companion_HLNA_C_IsCurrentEventMonalogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateFakeVelocityLagOffset
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VelocityLag                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::CalculateFakeVelocityLagOffset(float DeltaTime, struct FVector* VelocityLag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateFakeVelocityLagOffset");

	ABuff_Companion_HLNA_C_CalculateFakeVelocityLagOffset_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VelocityLag != nullptr)
		*VelocityLag = params.VelocityLag;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaHeightOffset
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HeightOffset_Base              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HeightOffset_WithBob           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BobOffset                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::CalculateHLNaHeightOffset(float DeltaTime, struct FVector* HeightOffset_Base, struct FVector* HeightOffset_WithBob, struct FVector* BobOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaHeightOffset");

	ABuff_Companion_HLNA_C_CalculateHLNaHeightOffset_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeightOffset_Base != nullptr)
		*HeightOffset_Base = params.HeightOffset_Base;
	if (HeightOffset_WithBob != nullptr)
		*HeightOffset_WithBob = params.HeightOffset_WithBob;
	if (BobOffset != nullptr)
		*BobOffset = params.BobOffset;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::IsAttachedToCamera(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera");

	ABuff_Companion_HLNA_C_IsAttachedToCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::IsAttachedToPlayer(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer");

	ABuff_Companion_HLNA_C_IsAttachedToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompanionEvents
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Tick_CompanionEvents(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_CompanionEvents");

	ABuff_Companion_HLNA_C_Tick_CompanionEvents_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionReadyToMonologue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Companion_HLNA_C::IsCompanionReadyToMonologue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsCompanionReadyToMonologue");

	ABuff_Companion_HLNA_C_IsCompanionReadyToMonologue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ConvertTargetRelOffsetToWorld
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::STATIC_ConvertTargetRelOffsetToWorld(struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ConvertTargetRelOffsetToWorld");

	ABuff_Companion_HLNA_C_ConvertTargetRelOffsetToWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera_Pure
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::IsAttachedToCamera_Pure(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToCamera_Pure");

	ABuff_Companion_HLNA_C_IsAttachedToCamera_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaTargetRelLocFPV
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                 WithWorldLocation              (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::STATIC_UpdateHLNaTargetRelLocFPV(const struct FVector& WithWorldLocation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaTargetRelLocFPV");

	ABuff_Companion_HLNA_C_UpdateHLNaTargetRelLocFPV_Params params;
	params.WithWorldLocation = WithWorldLocation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaOrbitDir
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OrbitDir                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::CalculateHLNaOrbitDir(float DeltaTime, struct FVector* OrbitDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaOrbitDir");

	ABuff_Companion_HLNA_C_CalculateHLNaOrbitDir_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrbitDir != nullptr)
		*OrbitDir = params.OrbitDir;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetScreenPercentageWorldLocation
// ()
// Parameters:
// struct FVector2D               Percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ProjectionDist                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::GetScreenPercentageWorldLocation(const struct FVector2D& Percentage, float ProjectionDist, struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetScreenPercentageWorldLocation");

	ABuff_Companion_HLNA_C_GetScreenPercentageWorldLocation_Params params;
	params.Percentage = Percentage;
	params.ProjectionDist = ProjectionDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.TickUpdateHLNaEventMovement
// (Exec, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::TickUpdateHLNaEventMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.TickUpdateHLNaEventMovement");

	ABuff_Companion_HLNA_C_TickUpdateHLNaEventMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldRotation
// ()
// Parameters:
// struct FRotator                TargetWorldRotation            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::CalculateHLNaTargetWorldRotation(struct FRotator* TargetWorldRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldRotation");

	ABuff_Companion_HLNA_C_CalculateHLNaTargetWorldRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetWorldRotation != nullptr)
		*TargetWorldRotation = params.TargetWorldRotation;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldLocation
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetWorldLocation            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::CalculateHLNaTargetWorldLocation(float DeltaTime, struct FVector* TargetWorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.CalculateHLNaTargetWorldLocation");

	ABuff_Companion_HLNA_C_CalculateHLNaTargetWorldLocation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetWorldLocation != nullptr)
		*TargetWorldLocation = params.TargetWorldLocation;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerDeath
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter**       DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::STATIC_OnPlayerDeath(class APrimalCharacter** DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerDeath");

	ABuff_Companion_HLNA_C_OnPlayerDeath_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionTransform
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Tick_UpdateCompanionTransform(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tick_UpdateCompanionTransform");

	ABuff_Companion_HLNA_C_Tick_UpdateCompanionTransform_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayParallelEmoteMontage
// (NetRequest, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class UAnimMontage*            PlayerEmote                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::PlayParallelEmoteMontage(class UAnimMontage** PlayerEmote, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PlayParallelEmoteMontage");

	ABuff_Companion_HLNA_C_PlayParallelEmoteMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerEmote != nullptr)
		*PlayerEmote = params.PlayerEmote;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerPlayAnimation
// ()
// Parameters:
// class UAnimMontage**           PlayedAnim                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AnimDuration                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::OnPlayerPlayAnimation(class UAnimMontage** PlayedAnim, float* AnimDuration, struct FName* StartSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnPlayerPlayAnimation");

	ABuff_Companion_HLNA_C_OnPlayerPlayAnimation_Params params;
	params.PlayedAnim = PlayedAnim;
	params.AnimDuration = AnimDuration;
	params.StartSectionName = StartSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionStateChanged
// ()

void ABuff_Companion_HLNA_C::OnCompanionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnCompanionStateChanged");

	ABuff_Companion_HLNA_C_OnCompanionStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocationRelative
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::SoftSetHLNaLocationRelative(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocationRelative");

	ABuff_Companion_HLNA_C_SoftSetHLNaLocationRelative_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshRotationInterpSpeed
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::STATIC_GetMeshRotationInterpSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshRotationInterpSpeed");

	ABuff_Companion_HLNA_C_GetMeshRotationInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaRotation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::SoftSetHLNaRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaRotation");

	ABuff_Companion_HLNA_C_SoftSetHLNaRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerVelocity
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::GetPlayerVelocity(struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerVelocity");

	ABuff_Companion_HLNA_C_GetPlayerVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer_Pure
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::IsAttachedToPlayer_Pure(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsAttachedToPlayer_Pure");

	ABuff_Companion_HLNA_C_IsAttachedToPlayer_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PretendWeAreInWorldSpace
// ()

void ABuff_Companion_HLNA_C::PretendWeAreInWorldSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PretendWeAreInWorldSpace");

	ABuff_Companion_HLNA_C_PretendWeAreInWorldSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnFoundPoI
// ()
// Parameters:
// struct FPointOfInterestData_ForCompanion FoundPointData                 (Parm, OutParm, ReferenceParm)
// class AActor**                 FoundPointActor                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::OnFoundPoI(class AActor** FoundPointActor, struct FPointOfInterestData_ForCompanion* FoundPointData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnFoundPoI");

	ABuff_Companion_HLNA_C_OnFoundPoI_Params params;
	params.FoundPointActor = FoundPointActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundPointData != nullptr)
		*FoundPointData = params.FoundPointData;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerADS
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Companion_HLNA_C::IsPlayerADS()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerADS");

	ABuff_Companion_HLNA_C_IsPlayerADS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshLocationInterpSpeed
// (Event, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::GetMeshLocationInterpSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetMeshLocationInterpSpeed");

	ABuff_Companion_HLNA_C_GetMeshLocationInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerOrbitOrigin
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::GetPlayerOrbitOrigin(struct FVector* Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.GetPlayerOrbitOrigin");

	ABuff_Companion_HLNA_C_GetPlayerOrbitOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.InterpHLNaRootToOrigin
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::InterpHLNaRootToOrigin(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.InterpHLNaRootToOrigin");

	ABuff_Companion_HLNA_C_InterpHLNaRootToOrigin_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocation
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::SoftSetHLNaLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.SoftSetHLNaLocation");

	ABuff_Companion_HLNA_C_SoftSetHLNaLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaAttachment
// ()

void ABuff_Companion_HLNA_C::UpdateHLNaAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UpdateHLNaAttachment");

	ABuff_Companion_HLNA_C_UpdateHLNaAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerLookingAtCompanion
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Companion_HLNA_C::IsPlayerLookingAtCompanion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.IsPlayerLookingAtCompanion");

	ABuff_Companion_HLNA_C_IsPlayerLookingAtCompanion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnedForPlayer
// ()

void ABuff_Companion_HLNA_C::OnSpawnedForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.OnSpawnedForPlayer");

	ABuff_Companion_HLNA_C_OnSpawnedForPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPClientDoMultiUse
// (Exec, Event, NetResponse, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.BPClientDoMultiUse");

	ABuff_Companion_HLNA_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UserConstructionScript
// ()

void ABuff_Companion_HLNA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.UserConstructionScript");

	ABuff_Companion_HLNA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__FinishedFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__FinishedFunc");

	ABuff_Companion_HLNA_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__UpdateFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_0__UpdateFunc");

	ABuff_Companion_HLNA_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__FinishedFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__FinishedFunc");

	ABuff_Companion_HLNA_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__UpdateFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_1__UpdateFunc");

	ABuff_Companion_HLNA_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__FinishedFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__FinishedFunc");

	ABuff_Companion_HLNA_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__UpdateFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_3__UpdateFunc");

	ABuff_Companion_HLNA_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__FinishedFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_5__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__FinishedFunc");

	ABuff_Companion_HLNA_C_Timeline_5__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__UpdateFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_5__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_5__UpdateFunc");

	ABuff_Companion_HLNA_C_Timeline_5__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__FinishedFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_6__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__FinishedFunc");

	ABuff_Companion_HLNA_C_Timeline_6__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__UpdateFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_6__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_6__UpdateFunc");

	ABuff_Companion_HLNA_C_Timeline_6__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__FinishedFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_7__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__FinishedFunc");

	ABuff_Companion_HLNA_C_Timeline_7__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__UpdateFunc
// ()

void ABuff_Companion_HLNA_C::Timeline_7__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Timeline_7__UpdateFunc");

	ABuff_Companion_HLNA_C_Timeline_7__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__FinishedFunc
// ()

void ABuff_Companion_HLNA_C::delay_before_intro_shatter__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__FinishedFunc");

	ABuff_Companion_HLNA_C_delay_before_intro_shatter__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__UpdateFunc
// ()

void ABuff_Companion_HLNA_C::delay_before_intro_shatter__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay before intro shatter__UpdateFunc");

	ABuff_Companion_HLNA_C_delay_before_intro_shatter__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__FinishedFunc
// ()

void ABuff_Companion_HLNA_C::fixed_orientation_timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__FinishedFunc");

	ABuff_Companion_HLNA_C_fixed_orientation_timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__UpdateFunc
// ()

void ABuff_Companion_HLNA_C::fixed_orientation_timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fixed orientation timeline__UpdateFunc");

	ABuff_Companion_HLNA_C_fixed_orientation_timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ReceiveBeginPlay
// ()

void ABuff_Companion_HLNA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ReceiveBeginPlay");

	ABuff_Companion_HLNA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportStarted
// ()
// Parameters:
// struct FVector                 WithPlayerLocation             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Client_OnMassTeleportStarted(const struct FVector& WithPlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportStarted");

	ABuff_Companion_HLNA_C_Client_OnMassTeleportStarted_Params params;
	params.WithPlayerLocation = WithPlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEnded
// ()

void ABuff_Companion_HLNA_C::Client_OnMassTeleportEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEnded");

	ABuff_Companion_HLNA_C_Client_OnMassTeleportEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEventReceived
// ()
// Parameters:
// TEnumAsByte<EMassTeleportState> EventState                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Client_OnMassTeleportEventReceived(TEnumAsByte<EMassTeleportState> EventState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_OnMassTeleportEventReceived");

	ABuff_Companion_HLNA_C_Client_OnMassTeleportEventReceived_Params params;
	params.EventState = EventState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateTeleportingChars
// ()
// Parameters:
// TArray<class APrimalCharacter*> NewTeleportCharsList           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_Companion_HLNA_C::Multi_UpdateTeleportingChars(TArray<class APrimalCharacter*>* NewTeleportCharsList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateTeleportingChars");

	ABuff_Companion_HLNA_C_Multi_UpdateTeleportingChars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTeleportCharsList != nullptr)
		*NewTeleportCharsList = params.NewTeleportCharsList;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.update teleporting characters vfx
// ()

void ABuff_Companion_HLNA_C::update_teleporting_characters_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.update teleporting characters vfx");

	ABuff_Companion_HLNA_C_update_teleporting_characters_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_OnMassTeleportEvent
// ()
// Parameters:
// TEnumAsByte<EMassTeleportState> EventState                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Multi_OnMassTeleportEvent(TEnumAsByte<EMassTeleportState> EventState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_OnMassTeleportEvent");

	ABuff_Companion_HLNA_C_Multi_OnMassTeleportEvent_Params params;
	params.EventState = EventState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Fresnel Flash
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Fresnel_Flash(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Fresnel Flash");

	ABuff_Companion_HLNA_C_Fresnel_Flash_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Hexagon Conversion Shop on Client
// ()

void ABuff_Companion_HLNA_C::Show_Hexagon_Conversion_Shop_on_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Show Hexagon Conversion Shop on Client");

	ABuff_Companion_HLNA_C_Show_Hexagon_Conversion_Shop_on_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.post teleport reaction
// ()

void ABuff_Companion_HLNA_C::post_teleport_reaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.post teleport reaction");

	ABuff_Companion_HLNA_C_post_teleport_reaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon absorb anim
// ()

void ABuff_Companion_HLNA_C::play_hexagon_absorb_anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play hexagon absorb anim");

	ABuff_Companion_HLNA_C_play_hexagon_absorb_anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scanning SFX and VFX
// ()

void ABuff_Companion_HLNA_C::Play_Scanning_SFX_and_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Scanning SFX and VFX");

	ABuff_Companion_HLNA_C_Play_Scanning_SFX_and_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Post Scan Reaction
// ()
// Parameters:
// float                          Scan_Duration                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FCompanionReactionData  Post_Scan_Reaction             (Parm)

void ABuff_Companion_HLNA_C::Play_Post_Scan_Reaction(float Scan_Duration, const struct FCompanionReactionData& Post_Scan_Reaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Play Post Scan Reaction");

	ABuff_Companion_HLNA_C_Play_Post_Scan_Reaction_Params params;
	params.Scan_Duration = Scan_Duration;
	params.Post_Scan_Reaction = Post_Scan_Reaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and React to Shot Event
// ()

void ABuff_Companion_HLNA_C::Delay_and_React_to_Shot_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and React to Shot Event");

	ABuff_Companion_HLNA_C_Delay_and_React_to_Shot_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server React To Shot Event
// ()

void ABuff_Companion_HLNA_C::Server_React_To_Shot_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server React To Shot Event");

	ABuff_Companion_HLNA_C_Server_React_To_Shot_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play friendly fire reaction
// ()
// Parameters:
// bool                           is_dead                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::try_play_friendly_fire_reaction(bool is_dead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play friendly fire reaction");

	ABuff_Companion_HLNA_C_try_play_friendly_fire_reaction_Params params;
	params.is_dead = is_dead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play attacked opponent reaction
// ()
// Parameters:
// bool                           is_dead                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::try_play_attacked_opponent_reaction(bool is_dead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play attacked opponent reaction");

	ABuff_Companion_HLNA_C_try_play_attacked_opponent_reaction_Params params;
	params.is_dead = is_dead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play creature almost dead
// ()

void ABuff_Companion_HLNA_C::try_play_creature_almost_dead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.try play creature almost dead");

	ABuff_Companion_HLNA_C_try_play_creature_almost_dead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Equipping Low Durability Weapon
// ()

void ABuff_Companion_HLNA_C::React_To_Equipping_Low_Durability_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Equipping Low Durability Weapon");

	ABuff_Companion_HLNA_C_React_To_Equipping_Low_Durability_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_ReactToCraftedItem
// ()
// Parameters:
// class FString                  ItemName                       (Parm, ZeroConstructor)

void ABuff_Companion_HLNA_C::Client_ReactToCraftedItem(const class FString& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Client_ReactToCraftedItem");

	ABuff_Companion_HLNA_C_Client_ReactToCraftedItem_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Bind Dino Death Reaction
// ()
// Parameters:
// class APrimalDinoCharacter*    ridden_dino                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Bind_Dino_Death_Reaction(class APrimalDinoCharacter* ridden_dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Bind Dino Death Reaction");

	ABuff_Companion_HLNA_C_Bind_Dino_Death_Reaction_Params params;
	params.ridden_dino = ridden_dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Try HLNA Environmental Reaction
// ()
// Parameters:
// struct FCompanionReactionData  reaction                       (Parm)

void ABuff_Companion_HLNA_C::Try_HLNA_Environmental_Reaction(const struct FCompanionReactionData& reaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Try HLNA Environmental Reaction");

	ABuff_Companion_HLNA_C_Try_HLNA_Environmental_Reaction_Params params;
	params.reaction = reaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Ridden Dino Died Reaction
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Ridden_Dino_Died_Reaction(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Ridden Dino Died Reaction");

	ABuff_Companion_HLNA_C_Ridden_Dino_Died_Reaction_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Update Purchasable Item State and update store on client
// ()
// Parameters:
// int                            Store_Item_Index               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           New_Index_Value                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Update_Purchasable_Item_State_and_update_store_on_client(int Store_Item_Index, bool New_Index_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Update Purchasable Item State and update store on client");

	ABuff_Companion_HLNA_C_Update_Purchasable_Item_State_and_update_store_on_client_Params params;
	params.Store_Item_Index = Store_Item_Index;
	params.New_Index_Value = New_Index_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and Disable Item Visibility In Store
// ()

void ABuff_Companion_HLNA_C::Delay_and_Disable_Item_Visibility_In_Store()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Delay and Disable Item Visibility In Store");

	ABuff_Companion_HLNA_C_Delay_and_Disable_Item_Visibility_In_Store_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.intro teleport materials
// ()

void ABuff_Companion_HLNA_C::intro_teleport_materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.intro teleport materials");

	ABuff_Companion_HLNA_C_intro_teleport_materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force set hlna location and rotation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::force_set_hlna_location_and_rotation(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.force set hlna location and rotation");

	ABuff_Companion_HLNA_C_force_set_hlna_location_and_rotation_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade away intro PP mask
// ()

void ABuff_Companion_HLNA_C::fade_away_intro_PP_mask()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade away intro PP mask");

	ABuff_Companion_HLNA_C_fade_away_intro_PP_mask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PrimalCharacterNotifyLevelUp
// ()
// Parameters:
// int                            ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::PrimalCharacterNotifyLevelUp(int ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.PrimalCharacterNotifyLevelUp");

	ABuff_Companion_HLNA_C_PrimalCharacterNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Player Level Up
// ()

void ABuff_Companion_HLNA_C::React_To_Player_Level_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.React To Player Level Up");

	ABuff_Companion_HLNA_C_React_To_Player_Level_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay and scan
// ()

void ABuff_Companion_HLNA_C::delay_and_scan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay and scan");

	ABuff_Companion_HLNA_C_delay_and_scan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tell Client To React With Hlna After Respawn
// ()

void ABuff_Companion_HLNA_C::Tell_Client_To_React_With_Hlna_After_Respawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Tell Client To React With Hlna After Respawn");

	ABuff_Companion_HLNA_C_Tell_Client_To_React_With_Hlna_After_Respawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission easy
// ()

void ABuff_Companion_HLNA_C::delay_start_VR_mission_easy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission easy");

	ABuff_Companion_HLNA_C_delay_start_VR_mission_easy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission med
// ()

void ABuff_Companion_HLNA_C::delay_start_VR_mission_med()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission med");

	ABuff_Companion_HLNA_C_delay_start_VR_mission_med_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission hard
// ()

void ABuff_Companion_HLNA_C::delay_start_VR_mission_hard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start VR mission hard");

	ABuff_Companion_HLNA_C_delay_start_VR_mission_hard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade in audio comp
// ()

void ABuff_Companion_HLNA_C::fade_in_audio_comp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade in audio comp");

	ABuff_Companion_HLNA_C_fade_in_audio_comp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade out audio comp
// ()

void ABuff_Companion_HLNA_C::fade_out_audio_comp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.fade out audio comp");

	ABuff_Companion_HLNA_C_fade_out_audio_comp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start vr mission flow test
// ()

void ABuff_Companion_HLNA_C::delay_start_vr_mission_flow_test()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay start vr mission flow test");

	ABuff_Companion_HLNA_C_delay_start_vr_mission_flow_test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.move hlna to focused target for tooltip
// ()

void ABuff_Companion_HLNA_C::move_hlna_to_focused_target_for_tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.move hlna to focused target for tooltip");

	ABuff_Companion_HLNA_C_move_hlna_to_focused_target_for_tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start looping scans
// ()

void ABuff_Companion_HLNA_C::start_looping_scans()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.start looping scans");

	ABuff_Companion_HLNA_C_start_looping_scans_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.stop looping scans
// ()

void ABuff_Companion_HLNA_C::stop_looping_scans()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.stop looping scans");

	ABuff_Companion_HLNA_C_stop_looping_scans_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.keep looping scans
// ()

void ABuff_Companion_HLNA_C::keep_looping_scans()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.keep looping scans");

	ABuff_Companion_HLNA_C_keep_looping_scans_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Cue
// ()
// Parameters:
// TArray<struct FLocalizedSoundCueEntry> Localized                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Play_Anim_Textures             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Simple_Load_Async_Sound_Cue(bool Play_Anim_Textures, TArray<struct FLocalizedSoundCueEntry>* Localized)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Cue");

	ABuff_Companion_HLNA_C_Simple_Load_Async_Sound_Cue_Params params;
	params.Play_Anim_Textures = Play_Anim_Textures;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Localized != nullptr)
		*Localized = params.Localized;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio
// ()
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)
// class UObject*                 LoadedAsset                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::AsyncAssetLoadedDelegate__ExplorerNoteAudio(const class FString& AssetPath, class UObject* LoadedAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio");

	ABuff_Companion_HLNA_C_AsyncAssetLoadedDelegate__ExplorerNoteAudio_Params params;
	params.AssetPath = AssetPath;
	params.LoadedAsset = LoadedAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play intro reaction
// ()

void ABuff_Companion_HLNA_C::play_intro_reaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.play intro reaction");

	ABuff_Companion_HLNA_C_play_intro_reaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ignore respawn reaction
// ()

void ABuff_Companion_HLNA_C::ignore_respawn_reaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ignore respawn reaction");

	ABuff_Companion_HLNA_C_ignore_respawn_reaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.prematurely cancel intro stuff
// ()

void ABuff_Companion_HLNA_C::prematurely_cancel_intro_stuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.prematurely cancel intro stuff");

	ABuff_Companion_HLNA_C_prematurely_cancel_intro_stuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.finished loading async loaded anim texture
// ()
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)
// class UObject*                 LoadedAsset                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::finished_loading_async_loaded_anim_texture(const class FString& AssetPath, class UObject* LoadedAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.finished loading async loaded anim texture");

	ABuff_Companion_HLNA_C_finished_loading_async_loaded_anim_texture_Params params;
	params.AssetPath = AssetPath;
	params.LoadedAsset = LoadedAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Wave
// ()
// Parameters:
// TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> Localized                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Play_Anim_Textures             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Simple_Load_Async_Sound_Wave(bool Play_Anim_Textures, TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>* Localized)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Simple Load Async Sound Wave");

	ABuff_Companion_HLNA_C_Simple_Load_Async_Sound_Wave_Params params;
	params.Play_Anim_Textures = Play_Anim_Textures;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Localized != nullptr)
		*Localized = params.Localized;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ResetHexTimer
// ()

void ABuff_Companion_HLNA_C::ResetHexTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ResetHexTimer");

	ABuff_Companion_HLNA_C_ResetHexTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateSpawnedBeamParticle
// ()
// Parameters:
// class UParticleSystem*         ParticleTemplate               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EndPointActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Multi_UpdateSpawnedBeamParticle(class UParticleSystem* ParticleTemplate, class AActor* EndPointActor, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Multi_UpdateSpawnedBeamParticle");

	ABuff_Companion_HLNA_C_Multi_UpdateSpawnedBeamParticle_Params params;
	params.ParticleTemplate = ParticleTemplate;
	params.EndPointActor = EndPointActor;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server_HasStartedGen2Intro
// ()

void ABuff_Companion_HLNA_C::Server_HasStartedGen2Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Server_HasStartedGen2Intro");

	ABuff_Companion_HLNA_C_Server_HasStartedGen2Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroFinished
// ()

void ABuff_Companion_HLNA_C::ClientGen2IntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroFinished");

	ABuff_Companion_HLNA_C_ClientGen2IntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroStart
// ()

void ABuff_Companion_HLNA_C::ClientGen2IntroStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ClientGen2IntroStart");

	ABuff_Companion_HLNA_C_ClientGen2IntroStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelNotifyGen2IntroFinished
// ()

void ABuff_Companion_HLNA_C::LevelNotifyGen2IntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelNotifyGen2IntroFinished");

	ABuff_Companion_HLNA_C_LevelNotifyGen2IntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerIntroFinished
// ()

void ABuff_Companion_HLNA_C::NotifyServerIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerIntroFinished");

	ABuff_Companion_HLNA_C_NotifyServerIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelCheatSetGen2IntroPlaying
// ()
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::LevelCheatSetGen2IntroPlaying(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.LevelCheatSetGen2IntroPlaying");

	ABuff_Companion_HLNA_C_LevelCheatSetGen2IntroPlaying_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerCheatSetGen2IntroPlaying
// ()
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::NotifyServerCheatSetGen2IntroPlaying(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.NotifyServerCheatSetGen2IntroPlaying");

	ABuff_Companion_HLNA_C_NotifyServerCheatSetGen2IntroPlaying_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay play death line
// ()

void ABuff_Companion_HLNA_C::delay_play_death_line()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.delay play death line");

	ABuff_Companion_HLNA_C_delay_play_death_line_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ExecuteUbergraph_Buff_Companion_HLNA
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::ExecuteUbergraph_Buff_Companion_HLNA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.ExecuteUbergraph_Buff_Companion_HLNA");

	ABuff_Companion_HLNA_C_ExecuteUbergraph_Buff_Companion_HLNA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finished Scan Dispatcher__DelegateSignature
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_HLNA_C::Finished_Scan_Dispatcher__DelegateSignature(class AShooterCharacter* ShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA.Buff_Companion_HLNA_C.Finished Scan Dispatcher__DelegateSignature");

	ABuff_Companion_HLNA_C_Finished_Scan_Dispatcher__DelegateSignature_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
