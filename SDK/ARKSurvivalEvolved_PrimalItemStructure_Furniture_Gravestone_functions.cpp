// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Furniture_Gravestone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Furniture_Gravestone.PrimalItemStructure_Furniture_Gravestone_C.ExecuteUbergraph_PrimalItemStructure_Furniture_Gravestone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Furniture_Gravestone_C::ExecuteUbergraph_PrimalItemStructure_Furniture_Gravestone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Furniture_Gravestone.PrimalItemStructure_Furniture_Gravestone_C.ExecuteUbergraph_PrimalItemStructure_Furniture_Gravestone");

	UPrimalItemStructure_Furniture_Gravestone_C_ExecuteUbergraph_PrimalItemStructure_Furniture_Gravestone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
