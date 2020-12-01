// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekShieldArmor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekShieldArmor.EngramEntry_TekShieldArmor_C.ExecuteUbergraph_EngramEntry_TekShieldArmor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekShieldArmor_C::ExecuteUbergraph_EngramEntry_TekShieldArmor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekShieldArmor.EngramEntry_TekShieldArmor_C.ExecuteUbergraph_EngramEntry_TekShieldArmor");

	UEngramEntry_TekShieldArmor_C_ExecuteUbergraph_EngramEntry_TekShieldArmor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
