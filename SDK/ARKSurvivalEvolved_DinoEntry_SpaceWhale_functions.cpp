// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_SpaceWhale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_SpaceWhale.DinoEntry_SpaceWhale_C.ExecuteUbergraph_DinoEntry_SpaceWhale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_SpaceWhale_C::ExecuteUbergraph_DinoEntry_SpaceWhale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_SpaceWhale.DinoEntry_SpaceWhale_C.ExecuteUbergraph_DinoEntry_SpaceWhale");

	UDinoEntry_SpaceWhale_C_ExecuteUbergraph_DinoEntry_SpaceWhale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
