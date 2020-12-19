// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Wire_Flex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Wire_Flex.PrimalItemStructure_Wire_Flex_C.ExecuteUbergraph_PrimalItemStructure_Wire_Flex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Wire_Flex_C::ExecuteUbergraph_PrimalItemStructure_Wire_Flex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Wire_Flex.PrimalItemStructure_Wire_Flex_C.ExecuteUbergraph_PrimalItemStructure_Wire_Flex");

	UPrimalItemStructure_Wire_Flex_C_ExecuteUbergraph_PrimalItemStructure_Wire_Flex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
