// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjClusterGrenadeFragment_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.UserConstructionScript
// ()

void AProjClusterGrenadeFragment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.UserConstructionScript");

	AProjClusterGrenadeFragment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ExecuteUbergraph_ProjClusterGrenadeFragment
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjClusterGrenadeFragment_C::ExecuteUbergraph_ProjClusterGrenadeFragment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ExecuteUbergraph_ProjClusterGrenadeFragment");

	AProjClusterGrenadeFragment_C_ExecuteUbergraph_ProjClusterGrenadeFragment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
