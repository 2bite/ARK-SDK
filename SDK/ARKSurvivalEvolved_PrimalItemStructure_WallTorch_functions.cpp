// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WallTorch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WallTorch.PrimalItemStructure_WallTorch_C.ExecuteUbergraph_PrimalItemStructure_WallTorch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WallTorch_C::ExecuteUbergraph_PrimalItemStructure_WallTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WallTorch.PrimalItemStructure_WallTorch_C.ExecuteUbergraph_PrimalItemStructure_WallTorch");

	UPrimalItemStructure_WallTorch_C_ExecuteUbergraph_PrimalItemStructure_WallTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
