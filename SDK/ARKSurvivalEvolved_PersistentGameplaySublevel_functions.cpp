// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PersistentGameplaySublevel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PersistentGameplaySublevel.PersistentGameplaySublevel_C.ExecuteUbergraph_PersistentGameplaySublevel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APersistentGameplaySublevel_C::ExecuteUbergraph_PersistentGameplaySublevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentGameplaySublevel.PersistentGameplaySublevel_C.ExecuteUbergraph_PersistentGameplaySublevel");

	APersistentGameplaySublevel_C_ExecuteUbergraph_PersistentGameplaySublevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
