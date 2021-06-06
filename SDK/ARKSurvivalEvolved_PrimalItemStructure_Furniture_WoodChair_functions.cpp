// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Furniture_WoodChair_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Furniture_WoodChair.PrimalItemStructure_Furniture_WoodChair_C.ExecuteUbergraph_PrimalItemStructure_Furniture_WoodChair
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Furniture_WoodChair_C::ExecuteUbergraph_PrimalItemStructure_Furniture_WoodChair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Furniture_WoodChair.PrimalItemStructure_Furniture_WoodChair_C.ExecuteUbergraph_PrimalItemStructure_Furniture_WoodChair");

	UPrimalItemStructure_Furniture_WoodChair_C_ExecuteUbergraph_PrimalItemStructure_Furniture_WoodChair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
