// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Snowman_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Snowman.PrimalItemStructure_Snowman_C.ExecuteUbergraph_PrimalItemStructure_Snowman
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Snowman_C::ExecuteUbergraph_PrimalItemStructure_Snowman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Snowman.PrimalItemStructure_Snowman_C.ExecuteUbergraph_PrimalItemStructure_Snowman");

	UPrimalItemStructure_Snowman_C_ExecuteUbergraph_PrimalItemStructure_Snowman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
