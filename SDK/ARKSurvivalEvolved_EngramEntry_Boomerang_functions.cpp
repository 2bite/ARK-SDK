// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Boomerang_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Boomerang.EngramEntry_Boomerang_C.ExecuteUbergraph_EngramEntry_Boomerang
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Boomerang_C::ExecuteUbergraph_EngramEntry_Boomerang(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Boomerang.EngramEntry_Boomerang_C.ExecuteUbergraph_EngramEntry_Boomerang");

	UEngramEntry_Boomerang_C_ExecuteUbergraph_EngramEntry_Boomerang_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
