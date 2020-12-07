// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BirthdayCake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BirthdayCake.PrimalItemStructure_BirthdayCake_C.ExecuteUbergraph_PrimalItemStructure_BirthdayCake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BirthdayCake_C::ExecuteUbergraph_PrimalItemStructure_BirthdayCake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BirthdayCake.PrimalItemStructure_BirthdayCake_C.ExecuteUbergraph_PrimalItemStructure_BirthdayCake");

	UPrimalItemStructure_BirthdayCake_C_ExecuteUbergraph_PrimalItemStructure_BirthdayCake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
