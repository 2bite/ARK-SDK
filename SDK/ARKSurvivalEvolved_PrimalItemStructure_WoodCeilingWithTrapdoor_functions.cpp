// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodCeilingWithTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodCeilingWithTrapdoor.PrimalItemStructure_WoodCeilingWithTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_WoodCeilingWithTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodCeilingWithTrapdoor_C::ExecuteUbergraph_PrimalItemStructure_WoodCeilingWithTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodCeilingWithTrapdoor.PrimalItemStructure_WoodCeilingWithTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_WoodCeilingWithTrapdoor");

	UPrimalItemStructure_WoodCeilingWithTrapdoor_C_ExecuteUbergraph_PrimalItemStructure_WoodCeilingWithTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
