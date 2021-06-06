// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjWyvPoisonBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjWyvPoisonBall.ProjWyvPoisonBall_C.UserConstructionScript
// ()

void AProjWyvPoisonBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWyvPoisonBall.ProjWyvPoisonBall_C.UserConstructionScript");

	AProjWyvPoisonBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjWyvPoisonBall.ProjWyvPoisonBall_C.ExecuteUbergraph_ProjWyvPoisonBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjWyvPoisonBall_C::ExecuteUbergraph_ProjWyvPoisonBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWyvPoisonBall.ProjWyvPoisonBall_C.ExecuteUbergraph_ProjWyvPoisonBall");

	AProjWyvPoisonBall_C_ExecuteUbergraph_ProjWyvPoisonBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
