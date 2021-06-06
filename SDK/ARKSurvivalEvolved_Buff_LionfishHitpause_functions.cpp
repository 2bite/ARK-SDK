// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LionfishHitpause_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_LionfishHitpause.Buff_LionfishHitpause_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LionfishHitpause_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LionfishHitpause.Buff_LionfishHitpause_C.BPDeactivated");

	ABuff_LionfishHitpause_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LionfishHitpause.Buff_LionfishHitpause_C.ReceiveBeginPlay
// ()

void ABuff_LionfishHitpause_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LionfishHitpause.Buff_LionfishHitpause_C.ReceiveBeginPlay");

	ABuff_LionfishHitpause_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LionfishHitpause.Buff_LionfishHitpause_C.UserConstructionScript
// ()

void ABuff_LionfishHitpause_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LionfishHitpause.Buff_LionfishHitpause_C.UserConstructionScript");

	ABuff_LionfishHitpause_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LionfishHitpause.Buff_LionfishHitpause_C.ExecuteUbergraph_Buff_LionfishHitpause
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LionfishHitpause_C::ExecuteUbergraph_Buff_LionfishHitpause(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LionfishHitpause.Buff_LionfishHitpause_C.ExecuteUbergraph_Buff_LionfishHitpause");

	ABuff_LionfishHitpause_C_ExecuteUbergraph_Buff_LionfishHitpause_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
