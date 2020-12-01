// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodCatwalk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodCatwalk.PrimalItemStructure_WoodCatwalk_C.ExecuteUbergraph_PrimalItemStructure_WoodCatwalk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodCatwalk_C::ExecuteUbergraph_PrimalItemStructure_WoodCatwalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodCatwalk.PrimalItemStructure_WoodCatwalk_C.ExecuteUbergraph_PrimalItemStructure_WoodCatwalk");

	UPrimalItemStructure_WoodCatwalk_C_ExecuteUbergraph_PrimalItemStructure_WoodCatwalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
