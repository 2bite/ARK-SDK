// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Wardrums_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Wardrums.EngramEntry_Wardrums_C.ExecuteUbergraph_EngramEntry_Wardrums
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Wardrums_C::ExecuteUbergraph_EngramEntry_Wardrums(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Wardrums.EngramEntry_Wardrums_C.ExecuteUbergraph_EngramEntry_Wardrums");

	UEngramEntry_Wardrums_C_ExecuteUbergraph_EngramEntry_Wardrums_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
