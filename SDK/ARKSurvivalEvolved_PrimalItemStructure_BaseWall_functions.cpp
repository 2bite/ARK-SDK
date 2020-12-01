// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseWall.PrimalItemStructure_BaseWall_C.ExecuteUbergraph_PrimalItemStructure_BaseWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseWall_C::ExecuteUbergraph_PrimalItemStructure_BaseWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseWall.PrimalItemStructure_BaseWall_C.ExecuteUbergraph_PrimalItemStructure_BaseWall");

	UPrimalItemStructure_BaseWall_C_ExecuteUbergraph_PrimalItemStructure_BaseWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
