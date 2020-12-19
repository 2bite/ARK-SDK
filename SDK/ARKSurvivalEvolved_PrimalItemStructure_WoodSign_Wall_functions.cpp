// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodSign_Wall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodSign_Wall.PrimalItemStructure_WoodSign_Wall_C.ExecuteUbergraph_PrimalItemStructure_WoodSign_Wall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodSign_Wall_C::ExecuteUbergraph_PrimalItemStructure_WoodSign_Wall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodSign_Wall.PrimalItemStructure_WoodSign_Wall_C.ExecuteUbergraph_PrimalItemStructure_WoodSign_Wall");

	UPrimalItemStructure_WoodSign_Wall_C_ExecuteUbergraph_PrimalItemStructure_WoodSign_Wall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
