// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Companion_BaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Companion_BaseBP.Buff_Companion_BaseBP_C.BPInstigatorPossessed
// ()
// Parameters:
// class AController**            ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_BaseBP_C::BPInstigatorPossessed(class AController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_BaseBP.Buff_Companion_BaseBP_C.BPInstigatorPossessed");

	ABuff_Companion_BaseBP_C_BPInstigatorPossessed_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_BaseBP.Buff_Companion_BaseBP_C.UserConstructionScript
// ()

void ABuff_Companion_BaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_BaseBP.Buff_Companion_BaseBP_C.UserConstructionScript");

	ABuff_Companion_BaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Companion_BaseBP.Buff_Companion_BaseBP_C.ExecuteUbergraph_Buff_Companion_BaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Companion_BaseBP_C::ExecuteUbergraph_Buff_Companion_BaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Companion_BaseBP.Buff_Companion_BaseBP_C.ExecuteUbergraph_Buff_Companion_BaseBP");

	ABuff_Companion_BaseBP_C_ExecuteUbergraph_Buff_Companion_BaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
