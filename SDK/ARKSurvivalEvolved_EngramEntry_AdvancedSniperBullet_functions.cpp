// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdvancedSniperBullet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdvancedSniperBullet.EngramEntry_AdvancedSniperBullet_C.ExecuteUbergraph_EngramEntry_AdvancedSniperBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdvancedSniperBullet_C::ExecuteUbergraph_EngramEntry_AdvancedSniperBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdvancedSniperBullet.EngramEntry_AdvancedSniperBullet_C.ExecuteUbergraph_EngramEntry_AdvancedSniperBullet");

	UEngramEntry_AdvancedSniperBullet_C_ExecuteUbergraph_EngramEntry_AdvancedSniperBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
