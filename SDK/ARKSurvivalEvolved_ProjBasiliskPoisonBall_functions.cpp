// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBasiliskPoisonBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjBasiliskPoisonBall.ProjBasiliskPoisonBall_C.UserConstructionScript
// ()

void AProjBasiliskPoisonBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBasiliskPoisonBall.ProjBasiliskPoisonBall_C.UserConstructionScript");

	AProjBasiliskPoisonBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBasiliskPoisonBall.ProjBasiliskPoisonBall_C.ExecuteUbergraph_ProjBasiliskPoisonBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjBasiliskPoisonBall_C::ExecuteUbergraph_ProjBasiliskPoisonBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBasiliskPoisonBall.ProjBasiliskPoisonBall_C.ExecuteUbergraph_ProjBasiliskPoisonBall");

	AProjBasiliskPoisonBall_C_ExecuteUbergraph_ProjBasiliskPoisonBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
