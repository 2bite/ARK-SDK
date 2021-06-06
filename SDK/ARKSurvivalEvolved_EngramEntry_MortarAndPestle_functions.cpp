// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MortarAndPestle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MortarAndPestle.EngramEntry_MortarAndPestle_C.ExecuteUbergraph_EngramEntry_MortarAndPestle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MortarAndPestle_C::ExecuteUbergraph_EngramEntry_MortarAndPestle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MortarAndPestle.EngramEntry_MortarAndPestle_C.ExecuteUbergraph_EngramEntry_MortarAndPestle");

	UEngramEntry_MortarAndPestle_C_ExecuteUbergraph_EngramEntry_MortarAndPestle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
