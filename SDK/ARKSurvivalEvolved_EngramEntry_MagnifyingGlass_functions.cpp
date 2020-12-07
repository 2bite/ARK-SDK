// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MagnifyingGlass_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MagnifyingGlass.EngramEntry_MagnifyingGlass_C.ExecuteUbergraph_EngramEntry_MagnifyingGlass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MagnifyingGlass_C::ExecuteUbergraph_EngramEntry_MagnifyingGlass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MagnifyingGlass.EngramEntry_MagnifyingGlass_C.ExecuteUbergraph_EngramEntry_MagnifyingGlass");

	UEngramEntry_MagnifyingGlass_C_ExecuteUbergraph_EngramEntry_MagnifyingGlass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
