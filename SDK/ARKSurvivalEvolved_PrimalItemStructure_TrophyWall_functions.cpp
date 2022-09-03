// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TrophyWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TrophyWall.PrimalItemStructure_TrophyWall_C.ExecuteUbergraph_PrimalItemStructure_TrophyWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TrophyWall_C::ExecuteUbergraph_PrimalItemStructure_TrophyWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TrophyWall.PrimalItemStructure_TrophyWall_C.ExecuteUbergraph_PrimalItemStructure_TrophyWall");

	UPrimalItemStructure_TrophyWall_C_ExecuteUbergraph_PrimalItemStructure_TrophyWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
