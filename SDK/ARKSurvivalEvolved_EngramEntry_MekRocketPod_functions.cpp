// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MekRocketPod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MekRocketPod.EngramEntry_MekRocketPod_C.ExecuteUbergraph_EngramEntry_MekRocketPod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MekRocketPod_C::ExecuteUbergraph_EngramEntry_MekRocketPod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MekRocketPod.EngramEntry_MekRocketPod_C.ExecuteUbergraph_EngramEntry_MekRocketPod");

	UEngramEntry_MekRocketPod_C_ExecuteUbergraph_EngramEntry_MekRocketPod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
