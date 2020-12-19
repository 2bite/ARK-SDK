// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgTypeBP_Environmental_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DmgTypeBP_Environmental.DmgTypeBP_Environmental_C.ExecuteUbergraph_DmgTypeBP_Environmental
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDmgTypeBP_Environmental_C::ExecuteUbergraph_DmgTypeBP_Environmental(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DmgTypeBP_Environmental.DmgTypeBP_Environmental_C.ExecuteUbergraph_DmgTypeBP_Environmental");

	UDmgTypeBP_Environmental_C_ExecuteUbergraph_DmgTypeBP_Environmental_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
