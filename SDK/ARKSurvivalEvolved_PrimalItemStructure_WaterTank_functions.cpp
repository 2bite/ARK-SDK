// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WaterTank_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WaterTank.PrimalItemStructure_WaterTank_C.ExecuteUbergraph_PrimalItemStructure_WaterTank
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WaterTank_C::ExecuteUbergraph_PrimalItemStructure_WaterTank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WaterTank.PrimalItemStructure_WaterTank_C.ExecuteUbergraph_PrimalItemStructure_WaterTank");

	UPrimalItemStructure_WaterTank_C_ExecuteUbergraph_PrimalItemStructure_WaterTank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
