// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Spear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Spear.EngramEntry_Spear_C.ExecuteUbergraph_EngramEntry_Spear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Spear_C::ExecuteUbergraph_EngramEntry_Spear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Spear.EngramEntry_Spear_C.ExecuteUbergraph_EngramEntry_Spear");

	UEngramEntry_Spear_C_ExecuteUbergraph_EngramEntry_Spear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
