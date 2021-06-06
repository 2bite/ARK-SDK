// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPhoenixFireBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjPhoenixFireBall.ProjPhoenixFireBall_C.UserConstructionScript
// ()

void AProjPhoenixFireBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPhoenixFireBall.ProjPhoenixFireBall_C.UserConstructionScript");

	AProjPhoenixFireBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPhoenixFireBall.ProjPhoenixFireBall_C.ExecuteUbergraph_ProjPhoenixFireBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjPhoenixFireBall_C::ExecuteUbergraph_ProjPhoenixFireBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPhoenixFireBall.ProjPhoenixFireBall_C.ExecuteUbergraph_ProjPhoenixFireBall");

	AProjPhoenixFireBall_C_ExecuteUbergraph_ProjPhoenixFireBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
