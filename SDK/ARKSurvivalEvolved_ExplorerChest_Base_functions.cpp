// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplorerChest_Base.ExplorerChest_Base_C.BPGetExtraSpecialBlueprintInt
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AExplorerChest_Base_C::BPGetExtraSpecialBlueprintInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.BPGetExtraSpecialBlueprintInt");

	AExplorerChest_Base_C_BPGetExtraSpecialBlueprintInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.DrawBasicFloatingHUD
// (Exec, NetResponse, Static, MulticastDelegate, Private, HasOutParms, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AHUD**                   ForHUD                         (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Base_C::STATIC_DrawBasicFloatingHUD(class AHUD** ForHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.DrawBasicFloatingHUD");

	AExplorerChest_Base_C_DrawBasicFloatingHUD_Params params;
	params.ForHUD = ForHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveEndPlay");

	AExplorerChest_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveBeginPlay
// ()

void AExplorerChest_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveBeginPlay");

	AExplorerChest_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.PlayUnlock
// ()

void AExplorerChest_Base_C::PlayUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.PlayUnlock");

	AExplorerChest_Base_C_PlayUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.UserConstructionScript
// ()

void AExplorerChest_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.UserConstructionScript");

	AExplorerChest_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AExplorerChest_Base_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature");

	AExplorerChest_Base_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.CheckForPlayerState
// ()

void AExplorerChest_Base_C::CheckForPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.CheckForPlayerState");

	AExplorerChest_Base_C_CheckForPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.DoUnlock
// ()

void AExplorerChest_Base_C::DoUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.DoUnlock");

	AExplorerChest_Base_C_DoUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.ShortRefresh
// ()

void AExplorerChest_Base_C::ShortRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.ShortRefresh");

	AExplorerChest_Base_C_ShortRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.LongRefresh
// ()

void AExplorerChest_Base_C::LongRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.LongRefresh");

	AExplorerChest_Base_C_LongRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Base.ExplorerChest_Base_C.ExecuteUbergraph_ExplorerChest_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Base_C::ExecuteUbergraph_ExplorerChest_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.ExecuteUbergraph_ExplorerChest_Base");

	AExplorerChest_Base_C_ExecuteUbergraph_ExplorerChest_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
