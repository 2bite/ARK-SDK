// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExplorerNoteHLNA_ClientOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.DrawBuffFloatingHUD
// (Net, NetReliable, Event, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExplorerNoteHLNA_ClientOnly_C::STATIC_DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.DrawBuffFloatingHUD");

	ABuff_ExplorerNoteHLNA_ClientOnly_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExplorerNoteHLNA_ClientOnly_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.BuffTickClient");

	ABuff_ExplorerNoteHLNA_ClientOnly_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.ReceiveBeginPlay
// ()

void ABuff_ExplorerNoteHLNA_ClientOnly_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.ReceiveBeginPlay");

	ABuff_ExplorerNoteHLNA_ClientOnly_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.UserConstructionScript
// ()

void ABuff_ExplorerNoteHLNA_ClientOnly_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.UserConstructionScript");

	ABuff_ExplorerNoteHLNA_ClientOnly_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExplorerNoteHLNA_ClientOnly_C::ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly");

	ABuff_ExplorerNoteHLNA_ClientOnly_C_ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
