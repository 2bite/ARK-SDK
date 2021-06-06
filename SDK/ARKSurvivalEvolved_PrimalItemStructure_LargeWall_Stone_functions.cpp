// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_LargeWall_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_LargeWall_Stone.PrimalItemStructure_LargeWall_Stone_C.ExecuteUbergraph_PrimalItemStructure_LargeWall_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_LargeWall_Stone_C::ExecuteUbergraph_PrimalItemStructure_LargeWall_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_LargeWall_Stone.PrimalItemStructure_LargeWall_Stone_C.ExecuteUbergraph_PrimalItemStructure_LargeWall_Stone");

	UPrimalItemStructure_LargeWall_Stone_C_ExecuteUbergraph_PrimalItemStructure_LargeWall_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
