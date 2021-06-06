// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdvancedRifleBullet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdvancedRifleBullet.EngramEntry_AdvancedRifleBullet_C.ExecuteUbergraph_EngramEntry_AdvancedRifleBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdvancedRifleBullet_C::ExecuteUbergraph_EngramEntry_AdvancedRifleBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdvancedRifleBullet.EngramEntry_AdvancedRifleBullet_C.ExecuteUbergraph_EngramEntry_AdvancedRifleBullet");

	UEngramEntry_AdvancedRifleBullet_C_ExecuteUbergraph_EngramEntry_AdvancedRifleBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
