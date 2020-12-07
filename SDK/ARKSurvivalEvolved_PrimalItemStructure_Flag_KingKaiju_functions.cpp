// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Flag_KingKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Flag_KingKaiju.PrimalItemStructure_Flag_KingKaiju_C.ExecuteUbergraph_PrimalItemStructure_Flag_KingKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Flag_KingKaiju_C::ExecuteUbergraph_PrimalItemStructure_Flag_KingKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Flag_KingKaiju.PrimalItemStructure_Flag_KingKaiju_C.ExecuteUbergraph_PrimalItemStructure_Flag_KingKaiju");

	UPrimalItemStructure_Flag_KingKaiju_C_ExecuteUbergraph_PrimalItemStructure_Flag_KingKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
