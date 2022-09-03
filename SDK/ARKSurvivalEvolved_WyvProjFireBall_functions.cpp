// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvProjFireBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvProjFireBall.WyvProjFireBall_C.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AWyvProjFireBall_C::GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjFireBall.WyvProjFireBall_C.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim");

	AWyvProjFireBall_C_GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WyvProjFireBall.WyvProjFireBall_C.UserConstructionScript
// ()

void AWyvProjFireBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjFireBall.WyvProjFireBall_C.UserConstructionScript");

	AWyvProjFireBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjFireBall.WyvProjFireBall_C.ExecuteUbergraph_WyvProjFireBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvProjFireBall_C::ExecuteUbergraph_WyvProjFireBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjFireBall.WyvProjFireBall_C.ExecuteUbergraph_WyvProjFireBall");

	AWyvProjFireBall_C_ExecuteUbergraph_WyvProjFireBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
