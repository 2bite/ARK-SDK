// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CruiseMissile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CruiseMissile.EngramEntry_CruiseMissile_C.ExecuteUbergraph_EngramEntry_CruiseMissile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CruiseMissile_C::ExecuteUbergraph_EngramEntry_CruiseMissile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CruiseMissile.EngramEntry_CruiseMissile_C.ExecuteUbergraph_EngramEntry_CruiseMissile");

	UEngramEntry_CruiseMissile_C_ExecuteUbergraph_EngramEntry_CruiseMissile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
