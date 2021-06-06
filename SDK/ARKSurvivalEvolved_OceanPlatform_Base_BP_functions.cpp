// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OceanPlatform_Base_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ThrottledTick
// ()

void AOceanPlatform_Base_BP_C::ThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ThrottledTick");

	AOceanPlatform_Base_BP_C_ThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPOnDemolish
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatform_Base_BP_C::BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPOnDemolish");

	AOceanPlatform_Base_BP_C_BPOnDemolish_Params params;
	params.ForPC = ForPC;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SetRetract Ladders
// ()
// Parameters:
// bool                           Retract                        (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatform_Base_BP_C::SetRetract_Ladders(bool Retract)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SetRetract Ladders");

	AOceanPlatform_Base_BP_C_SetRetract_Ladders_Params params;
	params.Retract = Retract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UpdateLadderHeight
// ()

void AOceanPlatform_Base_BP_C::UpdateLadderHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UpdateLadderHeight");

	AOceanPlatform_Base_BP_C_UpdateLadderHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BuildLadders
// (NetResponse, Static, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UpdateHeight                   (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatform_Base_BP_C::STATIC_BuildLadders(class APlayerController* PlayerController, bool UpdateHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BuildLadders");

	AOceanPlatform_Base_BP_C_BuildLadders_Params params;
	params.PlayerController = PlayerController;
	params.UpdateHeight = UpdateHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatform_Base_BP_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPPlacedStructure");

	AOceanPlatform_Base_BP_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SelfDamage
// ()

void AOceanPlatform_Base_BP_C::SelfDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SelfDamage");

	AOceanPlatform_Base_BP_C_SelfDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ReceiveBeginPlay
// ()

void AOceanPlatform_Base_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ReceiveBeginPlay");

	AOceanPlatform_Base_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AOceanPlatform_Base_BP_C::BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPIsAllowedToBuild");

	AOceanPlatform_Base_BP_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UserConstructionScript
// ()

void AOceanPlatform_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UserConstructionScript");

	AOceanPlatform_Base_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ExecuteUbergraph_OceanPlatform_Base_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatform_Base_BP_C::ExecuteUbergraph_OceanPlatform_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ExecuteUbergraph_OceanPlatform_Base_BP");

	AOceanPlatform_Base_BP_C_ExecuteUbergraph_OceanPlatform_Base_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
