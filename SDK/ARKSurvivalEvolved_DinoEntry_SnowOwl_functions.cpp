// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_SnowOwl_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_SnowOwl.DinoEntry_SnowOwl_C.ExecuteUbergraph_DinoEntry_SnowOwl
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_SnowOwl_C::ExecuteUbergraph_DinoEntry_SnowOwl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_SnowOwl.DinoEntry_SnowOwl_C.ExecuteUbergraph_DinoEntry_SnowOwl");

	UDinoEntry_SnowOwl_C_ExecuteUbergraph_DinoEntry_SnowOwl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
