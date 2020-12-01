// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WeaponC4_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WeaponC4.EngramEntry_WeaponC4_C.ExecuteUbergraph_EngramEntry_WeaponC4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WeaponC4_C::ExecuteUbergraph_EngramEntry_WeaponC4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WeaponC4.EngramEntry_WeaponC4_C.ExecuteUbergraph_EngramEntry_WeaponC4");

	UEngramEntry_WeaponC4_C_ExecuteUbergraph_EngramEntry_WeaponC4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
