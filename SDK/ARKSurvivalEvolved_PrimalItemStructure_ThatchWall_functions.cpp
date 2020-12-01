// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ThatchWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ThatchWall.PrimalItemStructure_ThatchWall_C.ExecuteUbergraph_PrimalItemStructure_ThatchWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ThatchWall_C::ExecuteUbergraph_PrimalItemStructure_ThatchWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ThatchWall.PrimalItemStructure_ThatchWall_C.ExecuteUbergraph_PrimalItemStructure_ThatchWall");

	UPrimalItemStructure_ThatchWall_C_ExecuteUbergraph_PrimalItemStructure_ThatchWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
