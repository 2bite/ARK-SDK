// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Wire_Flex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Wire_Flex.EngramEntry_Wire_Flex_C.ExecuteUbergraph_EngramEntry_Wire_Flex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Wire_Flex_C::ExecuteUbergraph_EngramEntry_Wire_Flex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Wire_Flex.EngramEntry_Wire_Flex_C.ExecuteUbergraph_EngramEntry_Wire_Flex");

	UEngramEntry_Wire_Flex_C_ExecuteUbergraph_EngramEntry_Wire_Flex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
