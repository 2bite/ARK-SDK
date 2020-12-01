// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TrophyBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TrophyBase.PrimalItemStructure_TrophyBase_C.ExecuteUbergraph_PrimalItemStructure_TrophyBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TrophyBase_C::ExecuteUbergraph_PrimalItemStructure_TrophyBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TrophyBase.PrimalItemStructure_TrophyBase_C.ExecuteUbergraph_PrimalItemStructure_TrophyBase");

	UPrimalItemStructure_TrophyBase_C_ExecuteUbergraph_PrimalItemStructure_TrophyBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
