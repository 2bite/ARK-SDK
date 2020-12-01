// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekHitPause_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MekHitPause.Buff_MekHitPause_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekHitPause_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekHitPause.Buff_MekHitPause_C.BPDeactivated");

	ABuff_MekHitPause_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekHitPause.Buff_MekHitPause_C.ReceiveBeginPlay
// ()

void ABuff_MekHitPause_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekHitPause.Buff_MekHitPause_C.ReceiveBeginPlay");

	ABuff_MekHitPause_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekHitPause.Buff_MekHitPause_C.UserConstructionScript
// ()

void ABuff_MekHitPause_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekHitPause.Buff_MekHitPause_C.UserConstructionScript");

	ABuff_MekHitPause_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekHitPause.Buff_MekHitPause_C.ExecuteUbergraph_Buff_MekHitPause
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekHitPause_C::ExecuteUbergraph_Buff_MekHitPause(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekHitPause.Buff_MekHitPause_C.ExecuteUbergraph_Buff_MekHitPause");

	ABuff_MekHitPause_C_ExecuteUbergraph_Buff_MekHitPause_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
